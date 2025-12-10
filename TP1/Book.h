#ifndef LIVRE_H
#define LIVRE_H
#include "Date.h"
#include <string>
#include <vector>

class Book
{
private:
    std::string title_ ;
    std::string autor_ ;
    Language language_ ;
    std::string gender_ ;
    Date date_of_publication_ ;
    std::string isbn_ ;
    std::vector <std::string> list_book_ ;
public:
    Book(std::string title, std::string autor, Language language=French, std::string gender=" ", Date date_of_publication, std::string isbn="0000", std::vector <std::string> list_book);


     
};

enum Language {
    French,
    English,
    Deutch,
};

#endif