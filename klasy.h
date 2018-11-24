#include <SFML/Graphics.hpp>

/*class Przycisk
{
protected:
    sf::Sprite obraz;
    sf::Texture tekstura;
    sf::Text tekst;

public:
    Przycisk();
    ~Przycisk();
};*/

class Gracz
{
protected:
    sf::Sprite obraz;
    sf::Texture tekstura;
    sf::Vector2f przyspieszenie;

public:
    Gracz(std::string);
    ~Gracz();
    sf::Sprite getObraz();
    void ruch(float, float);
    void drag();
    void porusz();
};

class Wskaznik
{
    protected:

        sf::Sprite celownik;
        sf::Texture tekstura;

    public:
        Wskaznik(std::string);
        ~Wskaznik ();
        sf::Sprite getObraz();
        void setposition(float,float);
};

class Wrog
{
    protected:

        sf::Sprite

};

class Przeszkoda
{
    ;
};
