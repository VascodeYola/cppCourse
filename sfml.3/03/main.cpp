#include <SFML/Graphics.hpp>
#include <cmath>
#include <SFML/Window.hpp>
#include <iostream>

//инициализирует фигуру указатель
void init(sf::ConvexShape &pointer)
{
}

//опрашивает и обрабатывает доступные события в цикле
//Polls and handles available events in loop.
void pollEvents(sf::RenderWindow &window, sf::Vector2f &mousePosition)
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        switch (event.type)
        {
        case sf::Event::Closed:
            window.close();
            break;
        case sf::Event::MouseButtonPressed:
            std::cout << "Mouse button pressed, "
                      << "x = " << event.mouseButton.x
                      << " y = " << event.mouseButton.y
                      << std::endl;
            break;
        case sf::Event::MouseButtonReleased:
            std::cout << "Mouse button raleased, "
                      << "x = " << event.mouseButton.x
                      << " y = " << event.mouseButton.y
                      << std::endl;
            break;
        default:
            break;
        }
    }
}

void update(const sf::Vector2f &mousePosition, sf::ConvexShape &pointer)
{
}

//рисует и выводит один кадр
//Draws and displays one frame
void redrawFrames(sf::RenderWindow &window, sf::ConvexShape &pointer)
{
    window.clear();
    window.display();
}

int main()
{
    constexpr unsigned WINDOW_WIDTH = 800;
    constexpr unsigned WINDOW_HEIGHT = 600;

    sf::RenderWindow window(
        sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}),
        "Print mouse event to terminal");

    while (window.isOpen())
    {
        pollEvent(window, mousePosition);
        update(mousePosition, pointer);
        redrawFrames(window, pointer);
    }
}