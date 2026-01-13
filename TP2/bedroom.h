#ifndef BEDROOM_H
#define BEDROOM_H
#include <stdexcept>

class Bedroom
{
    public:
        Bedroom(int num_bedroom, float price_of_night, std::string type_of_bedroom);
        bool isBedroom(int num_bedroom, float price_of_night, std::string type_of_bedroom);
        
        int getNumBedroom() const;
        float getPriceOfNight() const;
        std::string getTypeOfBedroom()const;

        void updateNumBedroom(int num_bedroom);
        void updatePriceOfNight(float new_price);
        void updateTypeOfBedroom(std::string new_type);

        // std::ostream& operator << (std::ostream& os, TypeOfBedroom type_of_bedromm)
        // {
            
        // }

    private:
        int num_bedroom_;
        float price_of_night_;
        std::string type_of_bedroom_;
};

enum class TypeOfBedroom 
{
    Single,
    Double,
    Suite
};

#endif
