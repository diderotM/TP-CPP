#ifndef CANVAS_H
#define CANVAS_H
#include <iostream>
#include "painter.h"


class Canvas
{
    public:
        Canvas(std::string title, Painter &painter, float price);
        int getIdCanvas() const;
        std::string getTitle()const;
        float getPrice() const;

        friend std::ostream &operator<<(std::ostream &os, const Canvas &canvas);

    private:
        int id_canvas_;
        std::string title_;
        const Painter &painter_;
        float price_; 
        static int cpt;
};

#endif