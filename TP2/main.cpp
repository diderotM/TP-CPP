#include <iostream>
#include "date.h"

int main(){
    Date  next_pi_day_ok(3,14,2026);
    std::cout << "ok:" << next_pi_day_ok.month() << "/" << next_pi_day_ok.day() << "/" << next_pi_day_ok.year() << std::endl; 
    return 0;
}