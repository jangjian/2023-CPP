#include <string>
#include <iostream>

using namespace std;

class Player {
public :
    Player(string name, int health, int attack, int defense)
        : name_(name), health_(health), attack_(attack), defense_(defense)
    {

    }

    void present() const {
        cout << "이름: " << name_ << endl;
        cout << "체력: " << health_ << endl;
        cout << "공격: " << attack_ << endl;
        cout << "방어: " << defense_ << endl;
    }

private:
    string name_;
    int health_;
    int attack_;
    int defense_;
};

int main() {
    Player* p1 = new Player("슈퍼맨", 100, 20, 5);
    p1->present();

    delete p1;


    return 0;
}