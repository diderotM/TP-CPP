#include "Date.h"

Date::Date(int day, int month, int year) : 
    day_(day), month_(month), year_(year) { }

int Date::day() {
    return day_ ;
}
int Date::year() {
    return year_ ;
}
int Date::month() {
    return month_ ;
}

void Date::day(int day) {
    day_ = day ;
}
void Date::year(int year) {
    year_ = year ;
}
void Date::month(int month) {
    month_ = month ;
}