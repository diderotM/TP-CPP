#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include "date.h"

class Client
{
private:
    static int id_client_ ;
    std::string first_name_;
    std::string last_name_;  

    /* data */
public:
    Client(std::string first_name, std::string last_name);
    bool reservation(Date start_date, int number_of_night, int id_bedroom, int id_client, int id_hotel );
    bool cancelReservation(int id_client, int id_hotel, Date start_date);
    std::string firstName() const;
    std::string lastName() const;
    static int getID(); 
    void updateFirstName(std::string first_name);
    void updateLastName(std::string last_name);
};


#endif