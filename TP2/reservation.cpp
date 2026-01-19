#include "reservation.h"
#include <ostream>

Reservation::Reservation(Date start_reservation, int number_of_night, int id_bed_romm, int id_client, std::string id_hotel, float amount):start_date_(start_reservation), number_of_night_(number_of_night), id_bedroom_(id_bed_romm), id_client_(id_client), id_hotel_(id_hotel), amount_(amount)
{
    static int cpt=0;
    ++cpt;
    id_reservation_ = cpt;

}

bool Reservation::isReservation(Date start_reservation, int number_of_night, int id_bed_romm, int id_client, std::string id_hotel)
{
    return false;
}

int Reservation::getIDClient() const
{
    return id_client_;
}

std::string Reservation::getIDHotel() const
{
    return id_hotel_;
}

int Reservation::getIDbedroom() const
{
    return id_bedroom_;
}

void Reservation::updateStartDate(Date new_date)
{
    start_date_ = new_date;
}

void Reservation::updateNumberOfNight(int new_number_of_night)
{
    number_of_night_ = new_number_of_night;
}

void Reservation::updateIDBedroom(int new_id_bedroom)
{
    id_bedroom_ = new_id_bedroom;
}

void Reservation::updateIDHotel(std::string new_id_hotel)
{
    id_hotel_ = new_id_hotel;
}

float Reservation::reservationAmount()
{
    return amount_*number_of_night_;
}

std::ostream &operator<<(std::ostream& os, Reservation &reservation)
{
    os <<"the amount of this reservation is :"<<reservation.amount_<<" the number of client of this reservation is :"<<reservation.id_client_<<" the number of night of this reservation is :"<<reservation.number_of_night_<<" reservation amount is :"<<reservation.reservationAmount()<<std::endl;

    return os;
}
