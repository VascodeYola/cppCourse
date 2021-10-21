#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <cmath>
#include <iostream>

constexpr unsigned WINDOW_WIDTH = 800;
constexpr unsigned WINDOW_HEIGHT = 600;

int main()
{
    constexpr float BALL_SIZE = 40;

    sf::RenderWindow window(sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), "Moving ball");
    sf::Clock clock, clock2;

    sf::Vector2f speed = {100.f, 30.f};
    constexpr float offsetY = 200;

    sf::CircleShape shape(BALL_SIZE);
    shape.setPosition({10, 300});
    shape.setFillColor(sf::Color(0xDC, 0x14, 0x3C));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        //обновление состояния
        constexpr float amplitudeY = 80.f;
        constexpr float periodY = 2;

        const float time = clock2.getElapsedTime().asSeconds();
        const float wavePhase = time * float(2 * M_PI);
        const float deltaTime = clock.restart().asSeconds();

        sf::Vector2f position = shape.getPosition();
        position.x += speed.x * deltaTime;
        const float y = amplitudeY * std::sin(wavePhase / periodY);
        position.y = y + offsetY;

        if ((position.x + 2 * BALL_SIZE >= WINDOW_WIDTH) && (speed.x > 0))
        {
            speed.x = -speed.x;
        }
        if ((position.x < 0) && (speed.x < 0))
        {
            speed.x = -speed.x;
        }

        shape.setPosition(position);

        window.clear();
        window.draw(shape);
        window.display();
    }
}