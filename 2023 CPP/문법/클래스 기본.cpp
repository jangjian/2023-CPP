#include <iostream>
#include <string>	

using namespace std;

struct Person
{
    int height;
    int weight;
};

// 여러 data들을 하나의 의미있는 구조체로 묶어서 관리
// 구조체, 클래스는 일반적으로 단어의 첫 글자를 대문자로 합시다
// class는 default가 private (struct는 default가 public)
class Student
{
public:
    // 생성자(constructor) : 객체를 생성할 때 호출되는 함수
    // 생성자를 정의하지 않으면 default로 매개변수가 없는 생성자가 정의된다.
    Student()
    {
        studentNum = 2215;
        name = "장지안";
        tel = "010-5725-0524";
        department = "뉴미디어소프트웨어과";
        address = "경기도 의왕시 청계동";
    }

    Student(int studentNum, string name, string tel, string department, string address) {
        // this : 객체 자기자신을 가리키는 포인터
        // 멤버변수와 매개변수가 이름이 같아도 구별가능
        this->studentNum = studentNum;
        this->name = name;
        this->tel = tel;
        this->department = department;
        this->address = address;
    }
    // class는 멤버 함수를 가질 수 있다.
    void print(void) {
        cout << "학번 : " << studentNum << endl;
        cout << "이름 : " << name << endl;
        cout << "전화번호 : " << tel << endl;
        cout << "학과 : " << department << endl;
        cout << "주소 : " << address << endl;
    }
    
private :
    // 성능 때문에 studentNum을 문자열로 하지 않음
    // 일반적으로 문자열은 정수형 데이터보다 많은 메모리 공간을 요구하며
    // 정수는 비교연산을 한번에 할 수 있으나, 문자열은 글자수만큼 반복하여 비교해야 함.
    int studentNum;
    string name;
    string tel;
    string department;
    string address;
   
    
};
int main() {
    // 자료형 : struct student(C++에서는 student만 써도 가능)
    //Student stu1(2215, "장지안", "010-5725-0524", "뉴미디어소프트웨어과", "경기도 의왕시 청계동");

    Student stu1 = Student();

    // stu1.print();

    Student stu2 = Student(2215, "장지안", "010-5725-0524", "뉴미디어소프트웨어과", "경기도 의왕시 청계동");

    stu2.print();


    return 0;

}


