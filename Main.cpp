#include <SFML/Graphics.hpp>

using namespace sf;
const float WINDOW_WEIGHT = 800;
const float WINDOW_HEIGHT = 600;
const float r2 = 250;
const std::string WINDOW_TITLE = "SFML Lesson2";

int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(WINDOW_WEIGHT, WINDOW_HEIGHT), "SFML Works!");
	CircleShape c1(10.f);
	RectangleShape rect1(Vector2f(20,80));
	RectangleShape rect(Vector2f(20,80));
	c1.move((800 - 2 * 10) / 2, (600 - 2 * 10) / 2);
	rect.setPosition(700,250);
	rect1.setPosition(50, 250);
	rect1.setFillColor(Color::Red);
	rect.setFillColor(Color::Green);
	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		// Отрисовка окна 
		window.draw(c1);
		window.draw(rect);
		window.draw(rect1);
		window.display();
	}

	return 0;
}