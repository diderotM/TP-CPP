#include "Date.h"

Date::Date(int day, int month, int year) : 
    day_(day), month_(month), year_(year) { }

int Date::day() const {
    return day_ ;
}
int Date::year() const {
    return year_ ;
}
int Date::month() const {
    return month_ ;
}


void day(int day) ;
void year(int year) ;
void month(int month) ;