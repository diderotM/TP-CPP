#include "canvas.h"
#include "painter.h"


int main()
{

    std::cout<<"---------test of painter class--------- "<<std::endl;
    Painter painter("Leonard", "de Vinci");
    std::cout<<painter;

    std::cout<<"---------test of canvas class--------- "<<std::endl;
    Canvas first_canva("la Gioconde", painter, 140000);
    std::cout<<first_canva;

    return 0;
}



