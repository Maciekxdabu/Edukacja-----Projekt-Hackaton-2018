#include "klasy.h"

Gracz::Gracz(std::string a)
{
    tekstura.loadFromFile(a);
    obraz.setTexture(tekstura);

    obraz.setPosition(250, 250);
    obraz.setOrigin(25, 25);

    przyspieszenie.x = 0;
    przyspieszenie.y = 0;
}

Gracz::~Gracz()
{
    ;
}

sf::Sprite Gracz::getObraz()
{
    return obraz;
}

void Gracz::ruchx(float x)
{
    przyspieszenie.x = x;
}

void Gracz::ruchy(float y)
{
    przyspieszenie.y = y;
}

void Gracz::drag()
{
    float dr = 0.4;

    if (przyspieszenie.x > 0)
        przyspieszenie.x -= dr;
    else if (przyspieszenie.x < 0)
        przyspieszenie.x += dr;

    if (przyspieszenie.y > 0)
        przyspieszenie.y -= dr;
    else if (przyspieszenie.y < 0)
        przyspieszenie.y += dr;
}

void Gracz::porusz()
{
    obraz.move(przyspieszenie.x*deltatime, przyspieszenie.y*deltatime);

    if (obraz.getPosition().x < 0)
        obraz.setPosition(0, obraz.getPosition().y);
    else if (obraz.getPosition().x > 500 - obraz.getTextureRect().width)
        obraz.setPosition(500 - obraz.getTextureRect().width, obraz.getPosition().y);

    if (obraz.getPosition().y < 0)
        obraz.setPosition(obraz.getPosition().x, 0);
    else if (obraz.getPosition().y > 500 - obraz.getTextureRect().height)
        obraz.setPosition(obraz.getPosition().x, 500 - obraz.getTextureRect().height);
}

void Gracz::obroc(float r)
{
    obraz.setRotation(r);
}
