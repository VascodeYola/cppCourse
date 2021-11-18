#include <SFML/Graphics.hpp>
//#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <cmath>

constexpr unsigned WINDOW_WIDTH = 800;
constexpr unsigned WINDOW_HEIGHT = 600;

int main()
{
    constexpr int pointCount = 200;
    sf::Clock clock;
    sf::Vector2f position = {400, 300};
    float rotationAngle = 0;
    const float turnRatio = 0.25;

    //создаём окно с параметрами сглаживания
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(
        sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), "Ellipse",
        sf::Style::Default, settings);

    //Объявляем фигуру, которая будет выглядеть как эллипс
    sf::ConvexShape ellipse;
    ellipse.setPosition({position.x, position.y});
    ellipse.setFillColor(sf::Color(0xB8, 0x86, 0x0B));

    //Инициализируем вершины псевдо-эллипса.
    ellipse.setPointCount(pointCount);
    for (int pointNo = 0; pointNo < pointCount; ++pointNo)
    {
        float angle = float(2 * M_PI * pointNo) / float(pointCount);
        sf::Vector2f point = {
            200 * std::sin(6 * angle) * std::sin(angle),
            200 * std::sin(6 * angle) * std::cos(angle)};
        ellipse.setPoint(pointNo, point);
    }

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
        const float deltaTime = clock.restart().asSeconds();
        rotationAngle += turnRatio * deltaTime;
        sf::Vector2f newPosition = {
            position.x + (WINDOW_WIDTH / 4) * std::sin(rotationAngle),
            position.y + (WINDOW_HEIGHT / 6) * std::cos(rotationAngle)};

        ellipse.setPosition({newPosition.x, newPosition.y});

        window.clear();
        window.draw(ellipse);
        window.display();
    }
}