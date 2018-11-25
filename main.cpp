#include <iostream>
#include <math.h>

#include "klasy.h"

using namespace std;

#define PI 3.141592653589

sf::Clock zegar;
float deltatime=0;

int main()
{
    sf::RenderWindow okno(sf::VideoMode(500, 500, 32), "Projekt Edukacja");

    okno.setMouseCursorVisible(false);

    Wskaznik myszka("img/celownik.png");

    Gracz player("img/gracz.png");
    //player.obroc(90);

    deltatime = zegar.restart().asSeconds();

    while (okno.isOpen())
    {
        sf::Event zdarzenie;
        while (okno.pollEvent(zdarzenie))
        {
            if (zdarzenie.type == sf::Event::Closed)
                okno.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            player.ruchy(-250);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            player.ruchy(250);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            player.ruchx(250);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            player.ruchx(-250);
        }

        player.porusz();
        player.drag();

        myszka.setposition(sf::Mouse::getPosition(okno).x,sf::Mouse::getPosition(okno).y);

        player.obroc( atan2(myszka.getObraz().getPosition().y - player.getObraz().getPosition().y,
                            myszka.getObraz().getPosition().x - player.getObraz().getPosition().x )/PI*180 + 90 );

        okno.clear(sf::Color::White);

        okno.draw(myszka.getObraz());
        okno.draw(player.getObraz());



        okno.display();

        deltatime = zegar.restart().asSeconds();
    }

    return 0;
}
