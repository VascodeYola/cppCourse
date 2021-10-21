#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{

    sf::RenderWindow window(sf::VideoMode({600, 600}), "Sweet Home");
    window.clear();

    sf::RectangleShape box;
    box.setSize({440, 200});
    box.setPosition({80, 360});
    box.setFillColor(sf::Color(0x4D, 0x2E, 0x0B));
    window.draw(box);

    sf::RectangleShape door;
    door.setSize({60, 140});
    door.setPosition({120, 420});
    door.setFillColor(sf::Color(0x00, 0x00, 0x00));
    window.draw(door);

    sf::ConvexShape triangle;
    triangle.setFillColor(sf::Color(0xFF, 0x80, 0x00));
    triangle.setPosition({200, 120});
    triangle.setPointCount(3);
    triangle.setPoint(0, {150, -20});
    triangle.setPoint(1, {150, 20});
    triangle.setPoint(3, {-100, 0});

    sf::ConvexShape roof;
    roof.setFillColor(sf::Color(0x5D, 0x1E, 0x17));
    roof.setPosition({180, 240});
    roof.setPointCount(4);
    roof.setPoint(0, {0, 0});
    roof.setPoint(1, {240, 0});
    roof.setPoint(2, {380, 120});
    roof.setPoint(3, {-140, 120});
    window.draw(roof);

    sf::CircleShape shape1(16);
    shape1.setPosition({385, 161});
    shape1.setFillColor(sf::Color(0xBF, 0xBF, 0xBF));
    window.draw(shape1);

    sf::CircleShape shape2(18);
    shape2.setPosition({395, 141});
    shape2.setFillColor(sf::Color(0xBF, 0xBF, 0xBF));
    window.draw(shape2);

    sf::CircleShape shape3(21);
    shape3.setPosition({408, 118});
    shape3.setFillColor(sf::Color(0xBF, 0xBF, 0xBF));
    window.draw(shape3);

    sf::CircleShape shape4(25);
    shape4.setPosition({412, 95});
    shape4.setFillColor(sf::Color(0xBF, 0xBF, 0xBF));
    window.draw(shape4);

    sf::RectangleShape chimney1;
    chimney1.setSize({80, 40});
    chimney1.setPosition({340, 190});
    chimney1.setFillColor(sf::Color(0x3B, 0x38, 0x38));
    window.draw(chimney1);

    sf::RectangleShape chimney2;
    chimney2.setSize({40, 80});
    chimney2.setPosition({360, 230});
    chimney2.setFillColor(sf::Color(0x3B, 0x38, 0x38));
    window.draw(chimney2);

    /*     sf::ConvexShape chimney;
    chimney.setFillColor(sf::Color(0x3B, 0x38, 0x38));
    chimney.setPosition({340,180});
    chimney.setPointCount(8) */

    // window.draw(triangle);

    window.display();

    sf::sleep(sf::seconds(5));
}