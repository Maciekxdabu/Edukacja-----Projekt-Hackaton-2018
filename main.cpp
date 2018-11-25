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

    Wrog przeciwnik("img/wrog.png", true, 0);
    Wrog przeciwnik1("img/wrog.png", false, 1);
    Wrog przeciwnik2("img/wrog.png", false, 2);
    Wrog przeciwnik3("img/wrog.png", false, 3);
    Wrog przeciwnik4("img/wrog.png", false, 4);

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

        przeciwnik.ruch();
        przeciwnik1.ruch();
        przeciwnik2.ruch();
        przeciwnik3.ruch();
        przeciwnik4.ruch();

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

        przeciwnik.obroc( atan2(player.getObraz().getPosition().y - przeciwnik.getObraz().getPosition().y,
                                player.getObraz().getPosition().x - przeciwnik.getObraz().getPosition().x )/PI*180 + 90);
        przeciwnik1.obroc( atan2(player.getObraz().getPosition().y - przeciwnik1.getObraz().getPosition().y,
                                player.getObraz().getPosition().x - przeciwnik1.getObraz().getPosition().x )/PI*180 + 90);
        przeciwnik2.obroc( atan2(player.getObraz().getPosition().y - przeciwnik2.getObraz().getPosition().y,
                                player.getObraz().getPosition().x - przeciwnik2.getObraz().getPosition().x )/PI*180 + 90);
        przeciwnik3.obroc( atan2(player.getObraz().getPosition().y - przeciwnik3.getObraz().getPosition().y,
                                player.getObraz().getPosition().x - przeciwnik3.getObraz().getPosition().x )/PI*180 + 90);
        przeciwnik4.obroc( atan2(player.getObraz().getPosition().y - przeciwnik4.getObraz().getPosition().y,
                                player.getObraz().getPosition().x - przeciwnik4.getObraz().getPosition().x )/PI*180 + 90);

//A(237,203)
        if (player.getObraz().getPosition().x > 212 && player.getObraz().getPosition().x < 217 && player.getObraz().getPosition().y > 203 && player.getObraz().getPosition().y < 248)
            {player.setPosition(212,player.getObraz().getPosition().y);}
        if (player.getObraz().getPosition().x < 307 && player.getObraz().getPosition().x > 302 && player.getObraz().getPosition().y > 203 && player.getObraz().getPosition().y < 248)
            {player.setPosition(307,player.getObraz().getPosition().y);}
        if (player.getObraz().getPosition().x > 237 && player.getObraz().getPosition().x < 282 && player.getObraz().getPosition().y > 178 && player.getObraz().getPosition().y < 208)
            {player.setPosition(player.getObraz().getPosition().x,178);}
        if (player.getObraz().getPosition().x > 237 && player.getObraz().getPosition().x < 282 && player.getObraz().getPosition().y < 273 && player.getObraz().getPosition().y > 268)
            {player.setPosition(player.getObraz().getPosition().x,273);}
//B(518,203)
        if (player.getObraz().getPosition().x > 493 && player.getObraz().getPosition().x < 498 && player.getObraz().getPosition().y > 203 && player.getObraz().getPosition().y < 248)
            {player.setPosition(493,player.getObraz().getPosition().y);}
        if (player.getObraz().getPosition().x < 588 && player.getObraz().getPosition().x > 583 && player.getObraz().getPosition().y > 203 && player.getObraz().getPosition().y < 248)
            {player.setPosition(588,player.getObraz().getPosition().y);}
        if (player.getObraz().getPosition().x > 518 && player.getObraz().getPosition().x < 563 && player.getObraz().getPosition().y > 178 && player.getObraz().getPosition().y < 208)
            {player.setPosition(player.getObraz().getPosition().x,178);}
        if (player.getObraz().getPosition().x > 518 && player.getObraz().getPosition().x < 563 && player.getObraz().getPosition().y < 273 && player.getObraz().getPosition().y > 268)
            {player.setPosition(player.getObraz().getPosition().x,273);}
//C(237,452)
        if (player.getObraz().getPosition().x > 212 && player.getObraz().getPosition().x < 217 && player.getObraz().getPosition().y > 452 && player.getObraz().getPosition().y < 522)
            {player.setPosition(212,player.getObraz().getPosition().y);}
        if (player.getObraz().getPosition().x < 307 && player.getObraz().getPosition().x > 302 && player.getObraz().getPosition().y > 452 && player.getObraz().getPosition().y < 522)
            {player.setPosition(307,player.getObraz().getPosition().y);}
        if (player.getObraz().getPosition().x > 237 && player.getObraz().getPosition().x < 282 && player.getObraz().getPosition().y > 427 && player.getObraz().getPosition().y < 432)
            {player.setPosition(player.getObraz().getPosition().x,427);}
        if (player.getObraz().getPosition().x > 237 && player.getObraz().getPosition().x < 282 && player.getObraz().getPosition().y < 522 && player.getObraz().getPosition().y > 517)
            {player.setPosition(player.getObraz().getPosition().x,522);}
//D(518,452)
        if (player.getObraz().getPosition().x > 493 && player.getObraz().getPosition().x < 498 && player.getObraz().getPosition().y > 452 && player.getObraz().getPosition().y < 522)
            {player.setPosition(493,player.getObraz().getPosition().y);}
        if (player.getObraz().getPosition().x < 588 && player.getObraz().getPosition().x > 583 && player.getObraz().getPosition().y > 452 && player.getObraz().getPosition().y < 522)
            {player.setPosition(588,player.getObraz().getPosition().y);}
        if (player.getObraz().getPosition().x > 518 && player.getObraz().getPosition().x < 563 && player.getObraz().getPosition().y > 427 && player.getObraz().getPosition().y < 432)
            {player.setPosition(player.getObraz().getPosition().x,427);}
        if (player.getObraz().getPosition().x > 518 && player.getObraz().getPosition().x < 563 && player.getObraz().getPosition().y < 522 && player.getObraz().getPosition().y > 517)
            {player.setPosition(player.getObraz().getPosition().x,522);}
//E(377,50)
        if (player.getObraz().getPosition().x > 352 && player.getObraz().getPosition().x < 357 && player.getObraz().getPosition().y > 50 && player.getObraz().getPosition().y < 95)
            {player.setPosition(352,player.getObraz().getPosition().y);}
        if (player.getObraz().getPosition().x < 447 && player.getObraz().getPosition().x > 442 && player.getObraz().getPosition().y > 50 && player.getObraz().getPosition().y < 95)
            {player.setPosition(447,player.getObraz().getPosition().y);}
        if (player.getObraz().getPosition().x > 377 && player.getObraz().getPosition().x < 422 && player.getObraz().getPosition().y > 25 && player.getObraz().getPosition().y < 30)
            {player.setPosition(player.getObraz().getPosition().x,25);}
        if (player.getObraz().getPosition().x > 377 && player.getObraz().getPosition().x < 422 && player.getObraz().getPosition().y < 120 && player.getObraz().getPosition().y > 115)
            {player.setPosition(player.getObraz().getPosition().x,120);}
//F(705,327)
        if (player.getObraz().getPosition().x > 680 && player.getObraz().getPosition().x < 685 && player.getObraz().getPosition().y > 327 && player.getObraz().getPosition().y < 372)
            {player.setPosition(680,player.getObraz().getPosition().y);}
        if (player.getObraz().getPosition().x < 775 && player.getObraz().getPosition().x > 750 && player.getObraz().getPosition().y > 327 && player.getObraz().getPosition().y < 372)
            {player.setPosition(775,player.getObraz().getPosition().y);}
        if (player.getObraz().getPosition().x > 705 && player.getObraz().getPosition().x < 750 && player.getObraz().getPosition().y > 302 && player.getObraz().getPosition().y < 307)
            {player.setPosition(player.getObraz().getPosition().x,302);}
        if (player.getObraz().getPosition().x > 705 && player.getObraz().getPosition().x < 750 && player.getObraz().getPosition().y < 397 && player.getObraz().getPosition().y > 392)
            {player.setPosition(player.getObraz().getPosition().x,397);}
//G(377,605)
        if (player.getObraz().getPosition().x > 352 && player.getObraz().getPosition().x < 357 && player.getObraz().getPosition().y > 605 && player.getObraz().getPosition().y < 650)
            {player.setPosition(352,player.getObraz().getPosition().y);}
        if (player.getObraz().getPosition().x < 447 && player.getObraz().getPosition().x > 442 && player.getObraz().getPosition().y > 605 && player.getObraz().getPosition().y < 650)
            {player.setPosition(447,player.getObraz().getPosition().y);}
        if (player.getObraz().getPosition().x > 377 && player.getObraz().getPosition().x < 422 && player.getObraz().getPosition().y > 580 && player.getObraz().getPosition().y < 585)
            {player.setPosition(player.getObraz().getPosition().x,580);}
        if (player.getObraz().getPosition().x > 377 && player.getObraz().getPosition().x < 422 && player.getObraz().getPosition().y < 675 && player.getObraz().getPosition().y > 670)
            {player.setPosition(player.getObraz().getPosition().x,675);}
//H(50,327)
        if (player.getObraz().getPosition().x > 25 && player.getObraz().getPosition().x < 30 && player.getObraz().getPosition().y > 327 && player.getObraz().getPosition().y < 372)
            {player.setPosition(25,player.getObraz().getPosition().y);}
        if (player.getObraz().getPosition().x < 120 && player.getObraz().getPosition().x > 115 && player.getObraz().getPosition().y > 327 && player.getObraz().getPosition().y < 372)
            {player.setPosition(120,player.getObraz().getPosition().y);}
        if (player.getObraz().getPosition().x > 50 && player.getObraz().getPosition().x < 95 && player.getObraz().getPosition().y > 302 && player.getObraz().getPosition().y < 307)
            {player.setPosition(player.getObraz().getPosition().x,302);}
        if (player.getObraz().getPosition().x > 50 && player.getObraz().getPosition().x < 95 && player.getObraz().getPosition().y < 397 && player.getObraz().getPosition().y > 392)
            {player.setPosition(player.getObraz().getPosition().x,397);}


        okno.clear(sf::Color::White);

        okno.draw(player.getObraz());
        okno.draw(myszka.getObraz());
        okno.draw(przeciwnik.getObraz());
        okno.draw(przeciwnik1.getObraz());
        okno.draw(przeciwnik2.getObraz());
        okno.draw(przeciwnik3.getObraz());
        okno.draw(przeciwnik4.getObraz());
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
