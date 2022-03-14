#pragma once
#include <SFML/Graphics.hpp>

class Player
{
private:
	const float START_SPEED = 200;
	const float START_HEALTH = 100;

	sf::Vector2f m_Position;
	sf::Sprite m_Sprite;
	sf::Texture m_Texture;
	sf::Vector2f m_Resolution; // screen resolution
	sf::IntRect m_Arena; // arena size
	int m_TileSize{};
	bool m_UpPressed = false;
	bool m_DownPressed = false;
	bool m_LeftPressed = false;
	bool m_RightPressed = false;
	int m_Health;
	int m_MaxHealth;
	sf::Time m_LastHit;
	float m_Speed;
public:
	Player();
	void spawn(sf::IntRect arena, sf::Vector2f resolution, int tileSize);
	void resetPlayerStats();
	bool hit(sf::Time timeHit);
	sf::Time getLastHitTime();
	sf::Rect<float> getPosition(); // sf::FloatRect
	sf::Vector2f getCenter();
	float getRotation();
	sf::Sprite getSprite();
	void moveUp();
	void moveRight();
	void moveLeft();
	void moveDown();
	void stopUp();
	void stopRight();
	void stopLeft();
	void stopDown();
	void update(float elapsedSeconds, sf::Vector2i mousePosition);
	void upgradeSpeed();
	void upgradeHealth();
	void increaseHealthLevel(int amount);
	int getHealth();
};