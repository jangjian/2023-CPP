#include <iostream>
#include <string>

using namespace std;

class Shape {
protected:
    int point_count;    // ������ ����
    int x;
    int y;

public:
    Shape(int points, int x_, int y_) : point_count(points), x(x_), y(y_) {}

    virtual ~Shape() {}

    int get_point_count(){  // ������ ����
        return point_count;
    }

    void set_position(int x_, int y_){  // ��ġ
        x = x_;
        y = y_;
    }

    void draw(){
    }
};

class RectangleShape : public Shape {
private:
    int width;
    int height;

public:
    RectangleShape(int x_, int y_, int w, int h) : Shape(4, x_, y_), width(w), height(h) {} // ������ �װ�

    void set_dimensions(int w, int h) { // �ʺ�, ���� ����
        width = w;
        height = h;
    }

    void draw(){
    }
};

class CircleShape : public Shape {
private:
    int radius;

public:
    CircleShape(int x_, int y_, int r) : Shape(0, x_, y_), radius(r) {}

    void set_radius(int r) {
        radius = r;
    }

    void draw() {
    }
};

int main() {

    return 0;
}