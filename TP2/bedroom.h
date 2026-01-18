#ifndef BEDROOM_H
#define BEDROOM_H
#include <stdexcept>
#include <iostream>

enum class TypeOfBedroom 
{
    Single,
    Double,
    Suite
};

class Bedroom
{
    public:
        Bedroom(int num_bedroom, float price_of_night, TypeOfBedroom type_of_bedroom);
        bool isBedroom(int num_bedroom, float price_of_night, TypeOfBedroom type_of_bedroom);
        
        int getNumBedroom() const;
        float getPriceOfNight() const;
        std::string getTypeOfBedroom()const;

        void updateNumBedroom(int num_bedroom);
        void updatePriceOfNight(float new_price);
        void updateTypeOfBedroom(TypeOfBedroom new_type);
        bool operator == (Bedroom& bedroom);
        friend std::ostream& operator << (std::ostream& os, Bedroom &bedroom);

    private:
        int num_bedroom_;
        float price_of_night_;
        TypeOfBedroom type_of_bedroom_;
};

std::string toString(TypeOfBedroom type_of_bedroom);

#endif


