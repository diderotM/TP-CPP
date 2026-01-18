#include "bedroom.h"


Bedroom::Bedroom(int num_bedroom, float price_of_night, TypeOfBedroom type_of_bedroom):num_bedroom_(num_bedroom), price_of_night_(price_of_night), type_of_bedroom_(type_of_bedroom)
{
    if(isBedroom(num_bedroom, price_of_night, type_of_bedroom))
        throw std::invalid_argument("Invalid Beedroom: number of bedroom" + std::to_string(num_bedroom) + ", price of bedroom" + std::to_string(price_of_night) + ", type of bedroom" + toString(type_of_bedroom));
}

bool Bedroom::isBedroom(int num_bedroom, float price_of_night, TypeOfBedroom type_of_bedroom)
{
    if (num_bedroom<0 || price_of_night < 0 || type_of_bedroom != TypeOfBedroom::Double || type_of_bedroom !=TypeOfBedroom::Single || type_of_bedroom != TypeOfBedroom::Suite)
    {
        return false;
    }
    return true;  
}

int Bedroom::getNumBedroom() const
{
    return num_bedroom_;
}

float Bedroom::getPriceOfNight() const
{
    return price_of_night_;
}

std::string Bedroom::getTypeOfBedroom() const
{
    return toString(type_of_bedroom_); 
}

void Bedroom::updateNumBedroom(int num_bedroom)
{
    num_bedroom_=num_bedroom;
}

void Bedroom::updatePriceOfNight(float new_price)
{
    price_of_night_ = new_price;
}

void Bedroom::updateTypeOfBedroom(TypeOfBedroom new_type)
{
    type_of_bedroom_ = new_type;
}

bool Bedroom::operator==(Bedroom &bedroom)
{
    return num_bedroom_ == bedroom.num_bedroom_;
}

std::ostream &operator<<(std::ostream &os, Bedroom &bedroom)
{
    os << "The num of bedroom is :"<< bedroom.num_bedroom_<<" the price of bedroom is :"<<bedroom.price_of_night_<< " the type of bedroom is :"<<toString(bedroom.type_of_bedroom_)<< std::endl;
    return os;
}


// Fonction utilitaire (Helper) pour la conversion de TypeOfBedroom en string
std::string toString(TypeOfBedroom type_of_bedroom) {
    switch (type_of_bedroom) {
        case TypeOfBedroom::Single: 
            return "Single";
        case TypeOfBedroom::Double: 
            return "Double";
        case TypeOfBedroom::Suite:  
            return "Suite";
        default:                    
            return "Unknown";
    }
}
