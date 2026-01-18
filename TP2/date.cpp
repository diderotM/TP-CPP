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

bool Date::operator==(Date &orther_date)
{   
    if (year_ != orther_date.year_) return false;
    if (month_ != orther_date.month_) return false;
    if (day_ != orther_date.day_) return false;
}

bool Date::operator > (Date &orther_date)
{   
    if (year_ < orther_date.year_) return false;
    if (month_ < orther_date.month_) return false;
    if (day_< orther_date.day_) return false;
}

bool Date::operator < (Date &orther_date)
{   
    if (year_ > orther_date.year_) return false;
    if (month_ > orther_date.month_) return false;
    if (day_ > orther_date.day_) return false;
}
