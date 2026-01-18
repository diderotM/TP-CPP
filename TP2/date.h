#ifndef DATE_H
#define DATE_H
#include <string>


class Date
{

public:
    Date(int day, int month, int year);
    int day() const;
    int year()const;
    int month() const;
    bool isDate(int month, int day, int year);
    void updateDay(int day);
    void updateYear(int year);
    void updateMonth(int month);

    bool operator == (Date &orther_date);
    bool operator > (Date &orther_date);
    bool operator < (Date &orther_date);
private:
    int month_ ;
    int day_ ;
    int year_ ;
};

#endif 