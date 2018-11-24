#include <iostream>

#include "klasy.h"

using namespace std;



int main()
{
    sf::RenderWindow okno(sf::VideoMode(500, 500, 32), "Projekt Edukacja");

    okno.setMouseCursorVisible(false);

    Wskaznik myszka("C:/Users/Bartek/Documents/GitHub/Edukacja-----Projekt-Hackaton-2018/img/celownik.png");

    while (okno.isOpen())
    {
        sf::Event zdarzenie;
        while (okno.pollEvent(zdarzenie))
        {
            if (zdarzenie.type == sf::Event::Closed)
                okno.close();
        }

        myszka.setposition(sf::Mouse::getPosition(okno).x,sf::Mouse::getPosition(okno).y);

        okno.clear(sf::Color::White);

        okno.draw(myszka.getObraz());

        okno.display();
    }

    return 0;
}
