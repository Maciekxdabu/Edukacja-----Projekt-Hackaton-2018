#include "klasy.h"

Wrog::Wrog(std::string a, bool czy_p)
{
    tekstura.loadFromFile(a);
    obraz.setTexture(tekstura);
    czy_prawda=czy_p;
}

Wrog::~Wrog()
{
    ;
}

sf::Sprite Wrog::getObraz()
{
    return obraz;
}
