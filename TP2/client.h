#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include "date.h"

class Client
{
private:
    int id_client_ ;
    std::string first_name_;
    std::string last_name_;  

    /* data */
public:
    Client(std::string first_name, std::string last_name);
    bool reservation(Date& start_date, int number_of_night, int id_bedroom, int id_client, int id_hotel );
    bool cancelReservation(int id_client, int id_hotel, Date& start_date);
    std::string getFirstName() const;
    std::string getLastName() const;
    int getIdClient() const; 
    void updateFirstName(std::string first_name);
    void updateLastName(std::string last_name);

    bool operator == (const Client client);
    friend std::ostream& operator << (std::ostream& os, const Client& client);
};

#endif