#include <SFML/Graphics.hpp>

using namespace sf;

class Entity {
public:

	// �����ϸ� Ŭ������ �Ű������� �� �� 99.99%�� �ּҰ����� �ѱ���
	// �޸� �뷮�� ���� �� �ִ�. call by value�� ���ϱ� ����
	Entity(int life, int speed, RectangleShape* sprite)
		:life_(life), speed_(speed), sprite_(sprite)
	{

	}
	// getter
	int get_life(void) { return life_; }
	int get_speed(void) { return speed_; }
	RectangleShape get_sprite(void) { return *sprite_; }

	//setter
	void set_life(int val) { life_ = val; }
	void set_speed(int val) { speed_ = val; }
	void set_sprite(RectangleShape* val) { sprite_ = val; }


private:
	int life_;
	int speed_;
	RectangleShape* sprite_;

};
class Player : public Entity {
public:
	Player(int life, int speed, RectangleShape* sprite, int score)
		:Entity(life,speed,sprite),score_(score)
	{

	}
private:
	int score_;
};
class Enemy : public Entity {
public :
	Enemy(int life, int speed, RectangleShape* sprite, int life_time)
		:Entity(life, speed, sprite), life_time_(life_time)
	{

	}

private:
	int life_time_;
};
int main(void)
{
	srand((unsigned int)time(NULL));

	RenderWindow window(VideoMode(1000, 800), "Sangsok");
	RectangleShape p;
	p.setFillColor(Color::White);
	p.setPosition(100, 300);
	p.setSize(Vector2f(50, 50));



	while (window.isOpen()) {
		Event e;
		while (window.pollEvent(e))
		{
			// �������� x�� ������ �� â�� �ݾ�������
			if (e.type == Event::Closed)
				window.close();
		}
		if (Keyboard::isKeyPressed(Keyboard::Right))
			p.move(1, 0);
		if (Keyboard::isKeyPressed(Keyboard::Left))
			p.move(-1, 0);
		if (Keyboard::isKeyPressed(Keyboard::Up))
			p.move(0, -1);
		if (Keyboard::isKeyPressed(Keyboard::Down))
			p.move(0, 1);

		window.clear();

		window.draw(p);
		window.display();
	}
	return 0;
}
