#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({335, 170}), "Traffic lights");

    window.clear();

    sf::CircleShape shape1(30);
    shape1.setPosition({25, 25});
    shape1.setFillColor(sf::Color(0xFF, 0xFF, 0x0));
    window.draw(shape1);

    sf::CircleShape shape2(20);
    shape2.setPosition({35, 35});
    shape2.setFillColor(sf::Color(0x00, 0x00, 0x00));
    window.draw(shape2);

    sf::RectangleShape shape3;
    shape3.setSize({30, 60});
    shape3.setPosition({25, 25});
    shape3.setFillColor(sf::Color(0x00, 0x00, 0x00));
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({10, 120});
    shape4.setPosition({45, 25});
    shape4.setFillColor(sf::Color(0xFF, 0xFF, 0x0));
    window.draw(shape4);

    sf::RectangleShape shape5;
    shape5.setSize({10, 120});
    shape5.setRotation(-15);
    shape5.setPosition({125, 25});
    shape5.setFillColor(sf::Color(0xFF, 0xFF, 0x0));
    window.draw(shape5);

    sf::RectangleShape shape6;
    shape6.setSize({10, 120});
    shape6.setRotation(15);
    shape6.setPosition({185, 25});
    shape6.setFillColor(sf::Color(0xFF, 0xFF, 0x0));
    window.draw(shape6);

    sf::CircleShape shape7(60);
    shape7.setPosition({215, 25});
    shape7.setFillColor(sf::Color(0xFF, 0xFF, 0x0));
    window.draw(shape7);

    sf::CircleShape shape8(50);
    shape8.setPosition({225, 35});
    shape8.setFillColor(sf::Color(0x00, 0x00, 0x00));
    window.draw(shape8);

    sf::RectangleShape shape9;
    shape9.setSize({60, 120});
    shape9.setPosition({285, 25});
    shape9.setFillColor(sf::Color(0x00, 0x00, 0x00));
    window.draw(shape9);

    sf::RectangleShape shape10;
    shape10.setSize({10, 50});
    shape10.setPosition({285, 95});
    shape10.setFillColor(sf::Color(0xFF, 0xFF, 0x0));
    window.draw(shape10);

    window.display();

    sf::sleep(sf::seconds(3));
}