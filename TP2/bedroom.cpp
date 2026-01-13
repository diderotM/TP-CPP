#include "bedroom.h"


Bedroom::Bedroom(int num_bedroom, float price_of_night, std::string type_of_bedroom):num_bedroom_(num_bedroom), price_of_night_(price_of_night), type_of_bedroom_(type_of_bedroom)
{
    if(isBedroom(num_bedroom, price_of_night, type_of_bedroom))
        throw std::invalid_argument("Invalid Beedroom: number of bedroom" + std::to_string(num_bedroom) + ", price of bedroom" + std::to_string(price_of_night) + ", type of bedroom" + type_of_bedroom);
}

bool Bedroom::isBedroom(int num_bedroom, float price_of_night, std::string type_of_bedroom)
{
    if (num_bedroom<0 || price_of_night < 0 || type_of_bedroom != "Double" || type_of_bedroom !="Single" || type_of_bedroom != "Suite")
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
    return type_of_bedroom_;
}

void Bedroom::updateNumBedroom(int num_bedroom)
{
    num_bedroom_=num_bedroom;
}

void Bedroom::updatePriceOfNight(float new_price)
{
    price_of_night_ = new_price;
}

void Bedroom::updateTypeOfBedroom(std::string new_type)
{
    type_of_bedroom_ = new_type;
}

// std::ostream& Bedroom::operator <<(std::ostream& os, const TypeOfBedroom& type_of_bedroom)
// {
//     switch (type_of_bedroom)
//     {
//     case TypeOfBedroom::Double:
//         return "Double";        
//     case TypeOfBedroom::Suite:
//         return "Suite";
//     case TypeOfBedroom::Single:
//         return "Single";
//     default:
//         break;
//     }   
// }
