#include "painter.h"

int Painter::cpt  = 0;

Painter::Painter(std::string first_name, std::string last_name):first_name_(first_name), last_name_(last_name)
{    
    Painter::cpt++;
    id_painter_=Painter::cpt;
}

std::string Painter::getFirstName() const
{
    return first_name_;
}

std::string Painter::getLastName() const
{
    return last_name_;
}

int Painter::getIdPainter() const
{
    return id_painter_;
}

std::ostream &operator<<(std::ostream &os, const Painter &painter)
{
    os<<"the first name is :" <<painter.first_name_<<", the last name is :"<<painter.last_name_<<", the id of painter is :"<<painter.id_painter_<<std::endl;

    return os;
}
