#include "klasy.h"

Wrog::Wrog(std::string a, bool czy_p, int m)
{
    tekstura.loadFromFile(a);
    obraz.setTexture(tekstura);
    obraz.setOrigin(25, 25);
    czy_prawda=czy_p;

    switch (m)
    {
    case 0:
        obraz.setPosition(400, 350);
        if (rand()%2 == 1)
        {
            punkt1.x = 400;
            punkt1.y = 238;
            punkt2.x = 400;
            punkt2.y = 442;
            kierunek.x = 0;
            kierunek.y = 50;
        }
        else
        {
            punkt1.x = 288;
            punkt1.y = 350;
            punkt2.x = 512;
            punkt2.y = 350;
            kierunek.x = 50;
            kierunek.y = 0;
        }
        break;
    case 1:
        obraz.setPosition(150, 150);
        punkt1.x = 200;
        punkt1.y = 100;
        punkt2.x = 100;
        punkt2.y = 200;
        kierunek.x = 50;
        kierunek.y = -50;
        break;
    case 2:
        obraz.setPosition(650, 150);
        punkt1.x = 700;
        punkt1.y = 200;
        punkt2.x = 600;
        punkt2.y = 100;
        kierunek.x = 50;
        kierunek.y = 50;
        break;
    case 3:
        obraz.setPosition(150, 550);
        punkt1.x = 200;
        punkt1.y = 600;
        punkt2.x = 100;
        punkt2.y = 500;
        kierunek.x = 50;
        kierunek.y = 50;
        break;
    case 4:
        obraz.setPosition(650, 550);
        punkt1.x = 700;
        punkt1.y = 500;
        punkt2.x = 600;
        punkt2.y = 600;
        kierunek.x = 50;
        kierunek.y = -50;
        break;
    }

    w_jedna = true;
    delta = rand()%100/100 + 0.5;
}

Wrog::~Wrog()
{
    ;
}

sf::Sprite Wrog::getObraz()
{
    return obraz;
}

void Wrog::ruch()
{
    obraz.move(kierunek.x*deltatime, kierunek.y*deltatime);

    switch (w_jedna)
    {
    case true:
        if ( obraz.getPosition().x > punkt1.x || ( kierunek.x == 0 && obraz.getPosition().y > punkt2.y ))
        {
            kierunek.x *= -1;
            kierunek.y *= -1;
            w_jedna = false;
        }
        break;
    case false:
        if ( obraz.getPosition().x < punkt2.x || ( kierunek.x == 0 && obraz.getPosition().y < punkt1.y ))
        {
            kierunek.x *= -1;
            kierunek.y *= -1;
            w_jedna = true;
        }
        break;
    }
}

void Wrog::obroc(float r)
{
    obraz.setRotation(r);
}
