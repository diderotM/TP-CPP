#include <iostream>
#include "date.h"
#include "client.h"
#include "bedroom.h"
#include "hotel.h"
#include "reservation.h"



int main(){
    Date  next_pi_day_ok(3,14,2026);
    std::cout << "ok:" << next_pi_day_ok.month() << "/" << next_pi_day_ok.day() << "/" << next_pi_day_ok.year() << std::endl; 
    std::cout << "----------------test of client class------------------" << std::endl;
    Client cl1("Demnajou", "diderot");
    std::cout << cl1; //"The last name is :"<<cl1.getLastName()<<" the first name is :"<<cl1.getFirstName()<<" the id of client is :"<<cl1.getIdClient() << std::endl;

    std::cout << "----------------test of Bedroom class------------------" << std::endl;
    TypeOfBedroom Single = TypeOfBedroom::Single, Doubel = TypeOfBedroom::Double;
    Bedroom bedroom(321, 150, Single);
    std::cout <<bedroom;

    std::cout << "----------------test of Bedroom class------------------" << std::endl;
    Bedroom bedroom2(322, 150, Doubel);
    std::vector<Bedroom*> bedrooms;
    bedrooms.push_back(&bedroom);
    bedrooms.push_back(&bedroom2);

    Hotel hotel("Louv01", "Louvre", " Dijon", bedrooms);
    std::cout << hotel;

    std::cout << "----------------test of Bedroom class------------------" << std::endl;

    Date start_reservation1(01, 20, 2026);
    Reservation reservation1(start_reservation1, 4, bedroom2.getNumBedroom(), cl1.getIdClient(), hotel.getIdHotel(), bedroom2.getPriceOfNight());
    std::cout<<reservation1;
    return 0;
}