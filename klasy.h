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
        sf::Text tekst;
        bool czy_prawda;
        float delta;
        sf::Vector2f punkt1, punkt2, kierunek;
        bool w_jedna; // strone

    public:

        Wrog(std::string, bool, int);
        ~Wrog();
        sf::Sprite getObraz();
        void ruch();
        void strzal();
        void czy_trafiony();
        void obroc(float);


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

