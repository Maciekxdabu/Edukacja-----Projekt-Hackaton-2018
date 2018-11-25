#include <SFML/Graphics.hpp>

extern float deltatime;

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
    void ruchx(float);
    void ruchy(float);
    void drag();
    void porusz();
    void obroc(float);
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

};

class Przeszkoda
{
    ;
};
