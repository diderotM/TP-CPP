
#ifndef HOTEL_H
#define HOTEL_H
#include <vector>
#include "date.h"
#include "bedroom.h"



class Hotel
{
private:
    std::string id_hotel_;
    std::string name_;
    std::string city_;
    std::vector<Bedroom*> bedroom_;

public:

    Hotel(std::string id_hotel, std::string name_, std::string city, std::vector<Bedroom*> bedroom);
    bool isHotel(std::vector<Bedroom*> bedroom);
    
    std::string getIdHotel() const;
    std::string getName() const;
    std::string getCity() const;
    std::vector<Bedroom*> getBedroom() const;

    void updateName(std::string new_name);
    void updateCity(std::string new_city);
    void deleteBedroom(Bedroom bedroom);
    void addBedroom(Bedroom new_bedroom);

    friend std::ostream& operator << (std::ostream& os, Hotel& hotel);
     
};

#endif