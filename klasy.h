#include <SFML/Graphics.hpp>

class Przycisk
{
protected:
    sf::Sprite obraz;
    sf::Texture tekstura;
    sf::Text tekst;

public:
    Przycisk();
    ~Przycisk();
};
