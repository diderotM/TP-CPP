#ifndef DATE_H
#define DATE_H

#include <string>

class Date
{

public:
    Date(int day, int month, int year);
    int day() ;
    int year() ;
    int month() ;

    void day(int day) ;
    void year(int year) ;
    void month(int month) ;
private:
    int month_ ;
    int day_ ;
    int year_ ;
};



#endif 