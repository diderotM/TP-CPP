#include <iostream>
#include "date.h"
#include "client.h"
#include "bedroom.h"
#include "hotel.h"
#include "reservation.h"



int main(){
    Date  next_pi_day_ok(3,14,2026);
    std::cout << "ok:" << next_pi_day_ok.month() << "/" << next_pi_day_ok.day() << "/" << next_pi_day_ok.year() << std::endl<< std::endl; 
    std::cout<< std::endl << "----------------test of client class------------------" << std::endl<< std::endl;
    Client Demnajou("Demnajou", "diderot");
    std::cout << Demnajou; //"The last name is :"<<cl1.getLastName()<<" the first name is :"<<cl1.getFirstName()<<" the id of client is :"<<cl1.getIdClient() << std::endl;

    std::cout << std::endl<< "----------------test of Bedroom class------------------" << std::endl<< std::endl;
    TypeOfBedroom Single = TypeOfBedroom::Single, Doubel = TypeOfBedroom::Double, Suite = TypeOfBedroom::Suite;
    Bedroom bedroom1(221, 100, Single);
    std::cout <<bedroom1;

    std::cout<< std::endl << "----------------test of Bedroom class------------------" << std::endl<< std::endl;
    Bedroom bedroom2(422, 210, Suite);
    std::vector<Bedroom*> bedrooms;
    bedrooms.push_back(&bedroom1);
    bedrooms.push_back(&bedroom2);

    Hotel hotel("Louv01", "Louvre", " Dijon", bedrooms);
    std::cout << hotel;

    std::cout << std::endl<< "----------------test of Bedroom class------------------" << std::endl<< std::endl;

    Date start_reservation1(01, 20, 2026);
    Reservation reservation1(start_reservation1, 4, bedroom2.getNumBedroom(), Demnajou.getIdClient(), hotel.getIdHotel(), bedroom2.getPriceOfNight());
    std::cout<<reservation1;

    std::cout<< std::endl << "----------------6 : Création d'un hôtel et de clients------------------" << std::endl; 
    Bedroom bedroom_diplomate1(411, 210, Suite);
    Bedroom bedroom_diplomate2(422, 210, Suite);
    Bedroom bedroom_diplomate3(311, 125, Doubel);
    Bedroom bedroom_diplomate4(322, 125, Doubel);
    Bedroom bedroom_diplomate5(333, 125, Doubel);
    Bedroom bedroom_diplomate6(344, 125, Doubel);
    Bedroom bedroom_diplomate7(355, 125, Doubel);
    Bedroom bedroom_diplomate8(211, 100, Single);
    Bedroom bedroom_diplomate9(222, 100, Single);
    Bedroom bedroom_diplomate10(233, 100, Single);

    std::vector<Bedroom*> bedroom_diplomates;
   
    bedroom_diplomates.push_back(&bedroom_diplomate1);
    bedroom_diplomates.push_back(&bedroom_diplomate2);
    bedroom_diplomates.push_back(&bedroom_diplomate3);
    bedroom_diplomates.push_back(&bedroom_diplomate4);
    bedroom_diplomates.push_back(&bedroom_diplomate5);
    bedroom_diplomates.push_back(&bedroom_diplomate6);
    bedroom_diplomates.push_back(&bedroom_diplomate7);
    bedroom_diplomates.push_back(&bedroom_diplomate8);
    bedroom_diplomates.push_back(&bedroom_diplomate9);
    bedroom_diplomates.push_back(&bedroom_diplomate10);

    Hotel hotel_diplomate("Diplomate", "Diplomate", "Yaounde", bedroom_diplomates);
    std::cout<<hotel_diplomate;

    std::cout<<"the information of bedroom of DIPLOMATE hotel:"<<std::endl;
    for(auto it=bedroom_diplomates.begin(); it<bedroom_diplomates.end(); ++it)
    {
        std::cout<<(**it);
    }

    std::vector<Client*> clients;
    Client Boujio("BOUJIO", "Etinne");
    Client Manfo("MANFO", "Bengy");
    Client Nanko("NANKO", "Esaie");

    clients.push_back(&Boujio);
    clients.push_back(&Demnajou);
    clients.push_back(&Manfo);
    clients.push_back(&Nanko);

    std::cout<<"the information of clients :"<<std::endl;
    for(auto it=clients.begin(); it<clients.end(); ++it)
    {
        std::cout<<**it;
    }

    return 0;
}