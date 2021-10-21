#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({20, 180}), "Traffic lights");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({60, 160});
    //shape1.setRotation(75);
    shape1.setPosition({10, 10});
    shape1.setFillColor(sf::Color(0x80, 0x80, 0x80));
    window.draw(shape1);

    sf::CircleShape shape2(20);
    shape2.setPosition({20, 20});
    shape2.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape2);

    sf::CircleShape shape3(20);
    shape3.setPosition({20, 70});
    shape3.setFillColor(sf::Color(0xFF, 0xFF, 0x0));
    window.draw(shape3);

    sf::CircleShape shape4(20);
    shape4.setPosition({20, 120});
    shape4.setFillColor(sf::Color(0x0, 0xFF, 0x0));
    window.draw(shape4);

    window.display();

    sf::sleep(sf::seconds(10));
}