
#ifndef RESERVATION_H
#define RESERVATION_H
#include "date.h"


class Reservation
{
private:
    int id_reservation_;
    Date start_date_;
    int number_of_night_;
    int id_bedroom_;
    std::string id_hotel_;
    int id_client_;
    float amount_;

public:
    Reservation(Date start_reservation, int number_of_night, int id_bedroom, int id_client, std::string id_hotel, float amount);
    bool isReservation(Date start_reservation, int number_of_night, int id_bedroom, int id_client, std::string id_hotel);
    // bool cancelReservation(int id_client, int id_bedroom, int id_hotel);
    
    int getIDClient() const;
    std::string getIDHotel() const;
    int getIDbedroom() const;

    void updateStartDate(Date new_date);
    void updateNumberOfNight(int new_number_of_night);
    void updateIDBedroom(int new_id_bedroom);
    void updateIDHotel(std::string new_id_hotel);

    float reservationAmount();

    friend std::ostream& operator << (std::ostream& os, Reservation &reservation);

};


#endif