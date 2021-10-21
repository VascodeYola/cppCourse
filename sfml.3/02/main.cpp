#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>

//опрашивает и обрабатывает доступные события в цикле
//Polls and handles available events in loop.
void pollEvents(sf::RenderWindow &window)
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

//рисует и выводит один кадр
//Draws and displays one frame
void redrawFrames(sf::RenderWindow &window)
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
        pollEvent(window);
        redrawFrames(window);
    }
}