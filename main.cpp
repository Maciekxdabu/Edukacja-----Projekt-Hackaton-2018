#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

int main()
{
    sf::RenderWindow okno(sf::VideoMode(500, 500, 32), "Projekt Edukacja");

    while (okno.isOpen())
    {
        sf::Event zdarzenie;
        while (okno.pollEvent(zdarzenie))
        {
            if (zdarzenie.type == sf::Event::Closed)
                okno.close();
        }

        okno.clear(sf::Color::White);

        okno.display();
    }

    return 0;
}
