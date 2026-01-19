#include "canvas.h"
int Canvas::cpt=0;
Canvas::Canvas(std::string title, Painter &painter, float price):title_(title), painter_(painter), price_(price)
{
    Canvas::cpt++;
    id_canvas_=cpt;
}

int Canvas::getIdCanvas() const
{
    return id_canvas_;
}

std::string Canvas::getTitle() const
{
    return title_;
}

float Canvas::getPrice() const
{
    return price_;
}


std::ostream &operator<<(std::ostream &os, const Canvas &canvas)
{
    os<<" the title is :"<< canvas.title_<<" the painter is :"<< canvas.painter_.getFirstName() +" "+ canvas.painter_.getLastName()<<std::endl;
     return os;
}
