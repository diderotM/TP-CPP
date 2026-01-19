#include "hotel.h"

Hotel::Hotel(std::string id_hotel, std::string name, std::string city, std::vector<Bedroom*> bedroom):id_hotel_(id_hotel), name_(name), bedroom_(std::move(bedroom))
{
    if (isHotel(bedroom))
    {
        throw std::invalid_argument("Invalid Hotel, the number of bedroom :" + std::to_string(bedroom.size()));
    }
    
}

bool Hotel::isHotel(std::vector<Bedroom*> bedroom)
{
    if(bedroom.size()<=0)
        return false;
}

std::string Hotel::getIdHotel() const
{
    return id_hotel_;
}

std::string Hotel::getName() const
{
    return name_;
}

std::string Hotel::getCity() const
{
    return city_;
}

std::vector<Bedroom*> Hotel::getBedroom() const
{
    return bedroom_;
}

void Hotel::updateName(std::string new_name)
{
    name_ = new_name;
}

void Hotel::updateCity(std::string new_city)
{
    city_ = new_city;
}

void Hotel::deleteBedroom(Bedroom bedroom)
{   
    for(auto it=bedroom_.begin(); it<bedroom_.end(); ++it)
    {   
        if( (*it) == &bedroom)
        {
            bedroom_.erase(it);
            break;
        }
    }
        
}

void Hotel::addBedroom(Bedroom new_bedroom)
{
    bedroom_.push_back(&new_bedroom);
}

std::ostream &operator<<(std::ostream &os, Hotel &hotel)
{
    os<<"the of this Hotel is :"<<hotel.name_<<"the city of this hotel is :"<<hotel.city_<<"the number of bedroom in this hotel is :"<<hotel.bedroom_.size()<<std::endl;
    return os;
}
