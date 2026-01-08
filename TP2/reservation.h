#ifndef RESERVATION_H
#define RESERVATION_H
#include "date.h"


class Resevation
{
private:
    Date start_date_;
    int number_of_night_;
    int id_bedroom_;
    int id_hotel_;
    int id_client_;
    double amount_;

public:
    Resevation(Date start_reservation, int number_of_night, int id_bed_romm, int id_client, int id_hotel);
    bool cancelReservation(int id_client, int id_bedroom, int id_hotel);
    int getIDClient() const;
    int getIDHotel() const;
    int getIDbedroom() const;
    void updateStartDate();
    void updateNumberOfNight();
    void updateIDBedroom();
    void updateIDHotel();

};


#endif