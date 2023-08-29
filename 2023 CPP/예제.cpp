#include <string>
#include <iostream>

using namespace std;

template <typename T>

class Player {
public:
    Player(string name, T health, T attack, T defense)
        : name_(name), health_(health), attack_(attack), defense_(defense)
    {

    }

    void present() const {
        cout << "�̸�: " << name_ << endl;
        cout << "ü��: " << health_ << endl;
        cout << "����: " << attack_ << endl;
        cout << "���: " << defense_ << endl;
    }

private:
    string name_;
    T health_;
    T attack_;
    T defense_;
};

int main() {
    Player<int>* p1 = new Player<int>("���۸�", 100, 20, 5);
    p1->present();

    delete p1;


    return 0;
}
