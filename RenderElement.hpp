#include <SFML/Graphics.hpp>


class RenderElement : public sf::RectangleShape {
public:
	RenderElement(sf::Vector2f size, sf::Vector2f position) : sf::RectangleShape(size) {
		setPosition(position);
	}

	void updatePosition(sf::Vector2f newPosition) { setPosition(newPosition); }
	void updateImage(sf::Texture newTexture) { setTexture(&newTexture); }
	void updateColor(sf::Color newColor) { setFillColor(newColor); }
};