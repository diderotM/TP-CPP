#include "Book.h"

Book::Book(std::string title, std::string autor, Language language, std::string gender=" ", Date date_of_publication, std::string isbn="0000", std::vector <std::string> list_book) :
    title_(title), autor_(autor), language_(language), gender_(gender), date_of_publication_(date_of_publication), isbn_(isbn), list_book_{isbn} { }


