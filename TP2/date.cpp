#include "date.h"
#include <stdexcept>

bool Date::isDate(int month, int day, int year) {
    if ((year < 2026) || (year > 2027)) return false;
    if ((day < 1) || (day>31)) return false;
    if ((month <1) || (month>12)) return false;
    if ((month == 2) && (day > 28)) return false;
    if (((month == 4) || (month == 6) || (month == 9)|| (month == 11)) && (day > 30)) return false;
    return true;
  }

Date::Date(int month, int day, int year) : month_(month), day_(day), year_(year) {
    if (!isDate(month, day, year)) 
        throw std::invalid_argument("Invalid date: " + std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year));
  }

int Date::day() const{
    return day_ ;
}

int Date::year() const{
    return year_ ;
}

int Date::month() const{
    return month_ ;
}

void Date::updateDay(int day) {
    day_ = day ;
}

void Date::updateYear(int year) {
    year_ = year ;
}

void Date::updateMonth(int month) {
    month_ = month ;
}

Date Date::operator+(const int day)
{
    day_ +=day;
    int add_month = 0;

    do
    {
        if(((month_ == 4) || (month_ == 6) || (month_ == 9)|| (month_ == 11)) && (day_ > 30)) 
        {
            add_month++;
            day_-=30;
        }
        if(month_ == 2 && day_>28)
        {
            add_month++;
            day_-=28;
        }
        if(((month_ == 1) || (month_ == 3) || (month_ == 5)|| (month_ == 7)|| (month_ == 8)|| (month_ == 10)|| (month_ == 12)) && (day_ > 30))
        {
            add_month++;
            day_-=31;
        }
        if (month_>12)
        {
            month_=1;
            year_++;
        }
        
    } while (day_>31);

    return Date(month_+add_month, day_, year_);
    
}

bool Date::operator==(const Date &orther_date)
{   
    if (year_ != orther_date.year_) return false;
    if (month_ != orther_date.month_) return false;
    if (day_ != orther_date.day_) return false;
}

bool Date::operator > (const Date &orther_date)
{   
    if (year_ < orther_date.year_) return false;
    if (month_ < orther_date.month_) return false;
    if (day_< orther_date.day_) return false;
}

bool Date::operator < (const Date &orther_date)
{   
    if (year_ > orther_date.year_) return false;
    if (month_ > orther_date.month_) return false;
    if (day_ > orther_date.day_) return false;
}


