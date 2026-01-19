#ifndef PAINTER_H
#define PAINTER_H
#include <iostream>

class Painter
{
    public:
        Painter(std::string first_name, std::string last_name);
        std::string getFirstName() const;
        std::string getLastName() const;
        int getIdPainter() const;

        friend std::ostream & operator << (std::ostream &os, const Painter &painter);


    private:
        std::string first_name_;
        std::string last_name_;
        int id_painter_;

        static int cpt;
};

#endif
