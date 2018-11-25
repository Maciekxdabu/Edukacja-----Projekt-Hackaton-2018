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
    void setPosition(float, float);
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
        void setPosition(float,float);
};

class Wrog
{
    protected:

        sf::Sprite obraz;
        sf::Texture tekstura;
        sf::Vector2i przyspieszenie;
        sf::Text tekst;
        bool czy_prawda;

    public:

        Wrog(std::string,bool);
        ~Wrog();
        sf::Sprite getObraz();
        void ruch(float, float);
        void drag();
        void strzal();
        void czy_trafiony();


};

class Przeszkoda
{
    protected:

        sf::Sprite obraz;
        sf::Texture tekstura;

    public:

        Przeszkoda(std::string);
        ~Przeszkoda();
        sf::Sprite getObraz();
        void setPosition(float,float);
};

