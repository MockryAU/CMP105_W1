#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	sf::Vector2u pos = window->getSize();

	anotherone.setSize(sf::Vector2f(100, 100));
	anotherone.setPosition(pos.x - 100, pos.y - 100);
	anotherone.setFillColor(sf::Color::Magenta);

	// initialise game objects
	rect.setSize(sf::Vector2f(50, 50));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	rect2.setSize(sf::Vector2f(35, 35));
	rect2.setPosition(107,107);
	rect2.setFillColor(sf::Color::Green);

	rect3.setSize(sf::Vector2f(20, 20));
	rect3.setPosition(115, 115);
	rect3.setFillColor(sf::Color::Blue);

	circle.setRadius(50);
	circle.setPosition((pos.x / 2) - 50, (pos.y / 2) - 50);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(10);

	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "Error loading font\n";
	}

	text.setFont(font);
	text.setString("Hello World");
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Yellow);
}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(rect);
	window->draw(rect2);
	window->draw(rect3);
	window->draw(circle);
	window->draw(text);
	window->draw(anotherone);

	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}