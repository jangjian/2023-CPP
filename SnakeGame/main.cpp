﻿#include <SFML/Graphics.hpp>
#include <stdlib.h>		// srand(), rand()
#include <time.h>		// time()
#include <stdio.h>

#define DIR_UP	0
#define DIR_DOWN	1
#define DIR_RIGHT	2
#define DIR_LEFT	3

#define BODY_MAX	20  //뱀 몸통의 최대길이

using namespace sf;

class Object {
public:
	int x_;
	int y_;
	RectangleShape sprite_;
};

class Snake {
public:
	int dir_;
	Object body_[BODY_MAX];
};

class Apple {
public:
	int x_;
	int y_;
	RectangleShape sprite_;
};

int main(void)
{
	printf("%d", DIR_RIGHT);
	const int WIDTH = 1000;							// 픽셀 넓이
	const int HEIGHT = 800;							// 픽셀 높이
	const int BLOCK_SIZE = 50;						// 한 칸이 가지고 있는 픽셀
	const int G_WIDTH = WIDTH / BLOCK_SIZE;			// 그리드의 넓이
	const int G_HEIGHT = HEIGHT / BLOCK_SIZE;		// 그리드의 높이

	srand(time(NULL));

	RenderWindow window(VideoMode(WIDTH, HEIGHT), "Snake Game");
	// 컴퓨터가 1초 동안 처리하는 횟수를 60으로 제한한다. 
	// Frame Per Second를 60으로 조절
	window.setFramerateLimit(20);

	Snake snake;
	snake.dir_ = DIR_DOWN;			// 뱀이 이동하는 방향

	for (int i = 0; i < BODY_MAX; i++) {
		snake.body_[i].x_ = -50, snake.body_[0].y_ = -50;		// 뱀의 그리드 좌표
		snake.body_[i].sprite_.setFillColor(Color::White);
		snake.body_[i].sprite_.setPosition(snake.body_[i].x_ * BLOCK_SIZE, snake.body_[i].y_ * BLOCK_SIZE);
		snake.body_[i].sprite_.setSize(Vector2f(BLOCK_SIZE, BLOCK_SIZE));
	}
	snake.body_[0].x_ = 3, snake.body_[0].y_ = 3;
	

	Apple apple;
	apple.x_ = rand() % G_WIDTH, apple.y_ = rand() % G_HEIGHT;
	apple.sprite_.setFillColor(Color::Red);
	// 50을 뺀 이유는 사과가 화면 밖에 벗어나지 않게 하기 위함
	apple.sprite_.setPosition(apple.x_ *BLOCK_SIZE, apple.y_ *BLOCK_SIZE);
	apple.sprite_.setSize(Vector2f(BLOCK_SIZE, BLOCK_SIZE));


	while (window.isOpen()) {
		Event e;
		while (window.pollEvent(e))
		{
			// 윈도우의 x를 눌렀을 때 창이 닫아지도록
			// Frame Per Second를 60으로 조절
			if (e.type == Event::Closed)
				window.close();
		}

		// 방향키가 동시에 눌러지지 않도록 else 처리
		if (Keyboard::isKeyPressed(Keyboard::Right)) {
			snake.dir_ = DIR_RIGHT;

		}
		else if (Keyboard::isKeyPressed(Keyboard::Left)) {
			snake.dir_ = DIR_LEFT;
		}
		else if (Keyboard::isKeyPressed(Keyboard::Up)) {
			snake.dir_ = DIR_UP;

		}
		else if (Keyboard::isKeyPressed(Keyboard::Down)) {
			snake.dir_ = DIR_DOWN;

		}
		// update
		if (snake.dir_ == DIR_UP && snake.body_[0].y_ >0) {
			snake.body_[0].y_--;
		}
		else if (snake.dir_ == DIR_DOWN && snake.body_[0].y_ < G_HEIGHT-1) {
			snake.body_[0].y_++;
		}
		else if (snake.dir_ == DIR_RIGHT && snake.body_[0].x_ < G_WIDTH-1) {
			snake.body_[0].x_++;
		}
		else if (snake.dir_ == DIR_LEFT && snake.body_[0].x_ > 0) {
			snake.body_[0].x_--;
		}
		snake.body_[0].sprite_.setPosition(snake.body_[0].x_ * BLOCK_SIZE, snake.body_[0].y_ * BLOCK_SIZE);

		// 뱀이 사과를 먹었을 때
		if (snake.body_[0].x_ ==apple.x_ && snake.body_[0].y_ ==apple.y_)
		{
			apple.x_ = rand() % G_WIDTH, apple.y_ = rand() % G_HEIGHT;
			apple.sprite_.setPosition(apple.x_ * BLOCK_SIZE, apple.y_ * BLOCK_SIZE);
		}

		// render
		window.clear();
		
		for (int i = 0; i < BODY_MAX; i++) 
			window.draw(snake.body_[0].sprite_);
		window.draw(apple.sprite_);		// draw를 늦게 할 수록 더 위에 있다.

		window.display();
	}

	return 0;
}