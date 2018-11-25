#include <iostream>
#include <math.h>
#include <vector>

#include "klasy.h"

using namespace std;

#define PI 3.141592653589

sf::Clock zegar;
float deltatime=0;
sf::Font czcionka;

int main()
{
    sf::RenderWindow okno(sf::VideoMode(800, 700, 32), "Projekt Edukacja");
    okno.setPosition(sf::Vector2i(0,0));

    czcionka.loadFromFile("arial.ttf");
    okno.setMouseCursorVisible(false);

    Wskaznik myszka("img/celownik.png");

    Gracz player("img/gracz.png");
    //player.obroc(90);

    deltatime = zegar.restart().asSeconds();

    Przeszkoda przeszkoda1("img/przeszkoda.png");
    Przeszkoda przeszkoda2("img/przeszkoda.png");
    Przeszkoda przeszkoda3("img/przeszkoda.png");
    Przeszkoda przeszkoda4("img/przeszkoda.png");
    Przeszkoda przeszkoda5("img/przeszkoda.png");
    Przeszkoda przeszkoda6("img/przeszkoda.png");
    Przeszkoda przeszkoda7("img/przeszkoda.png");
    Przeszkoda przeszkoda8("img/przeszkoda.png");

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

        myszka.setPosition(sf::Mouse::getPosition(okno).x,sf::Mouse::getPosition(okno).y);

        przeszkoda1.setPosition(237,203);
        przeszkoda2.setPosition(518,203);
        przeszkoda3.setPosition(237,452);
        przeszkoda4.setPosition(518,452);
        przeszkoda5.setPosition(377,50);
        przeszkoda6.setPosition(705,327);
        przeszkoda7.setPosition(377,605);
        przeszkoda8.setPosition(50,327);

        player.obroc( atan2(myszka.getObraz().getPosition().y - player.getObraz().getPosition().y,
                            myszka.getObraz().getPosition().x - player.getObraz().getPosition().x )/PI*180 + 90 );

        okno.clear(sf::Color::White);

        okno.draw(player.getObraz());
        okno.draw(myszka.getObraz());
        okno.draw(przeszkoda1.getObraz());
        okno.draw(przeszkoda2.getObraz());
        okno.draw(przeszkoda3.getObraz());
        okno.draw(przeszkoda4.getObraz());
        okno.draw(przeszkoda5.getObraz());
        okno.draw(przeszkoda6.getObraz());
        okno.draw(przeszkoda7.getObraz());
        okno.draw(przeszkoda8.getObraz());


        okno.display();

        deltatime = zegar.restart().asSeconds();
    }

    return 0;
}
