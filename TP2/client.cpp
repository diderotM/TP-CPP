#include "client.h"

Client::Client(std::string first_name, std::string last_name) : first_name_(first_name), last_name_(last_name)
{
    static int cpt = 0;
    cpt++;
    id_client_ = cpt;
}

bool Client::reservation(Date& start_date, int number_of_night, int id_bedroom, int id_client, int id_hotel)
{

    return false;
}

bool Client::cancelReservation(int id_client, int id_hotel, Date& start_date)
{
    return false;
}

std::string Client::getFirstName() const
{
    return first_name_;
}

std::string Client::getLastName() const
{
    return last_name_;
}

int Client::getIdClient() const
{
    return id_client_;
}

void Client::updateFirstName(std::string first_name)
{
    first_name_ = first_name;
}

void Client::updateLastName(std::string last_name)
{
    last_name_ = last_name;
}

std::ostream &operator<<(std::ostream& os, const Client &client)
{
    os << "The last name is :"<<client.last_name_<<" the first name is :"<<client.first_name_<<" the id of client is :"<<client.id_client_<<std::endl;   
    return os;
}

