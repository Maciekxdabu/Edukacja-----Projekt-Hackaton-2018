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
    ;
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
