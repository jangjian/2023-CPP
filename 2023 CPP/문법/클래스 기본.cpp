#include <iostream>
#include <string>	

using namespace std;

// 여러 data들을 하나의 의미있는 구조체로 묶어서 관리
// 구조체, 클래스는 일반적으로 단어의 첫 글자를 대문자로 합시다
// class는 default가 private (struct는 default가 public)
class Student
{
    // 성능 때문에 studentNum을 문자열로 하지 않음
    // 일반적으로 문자열은 정수형 데이터보다 많은 메모리 공간을 요구하며
    // 정수는 비교연산을 한번에 할 수 있으나, 문자열은 글자수만큼 반복하여 비교해야 함.
public :
    int studentNum;
    string name;
    string tel;
    string department;
    string address;

    // 생성자(constructor) : 객체를 생성할 때 호출되는 함수
    // 생성자를 정의하지 않으면 default로 매개변수가 없는 생성자가 정의된다.
    // Student() {}
   
    // class는 멤버 함수를 가질 수 있다.
    void print(void) {
        cout << "학번 : " << studentNum << endl;
        cout << "이름 : " << name << endl;
        cout << "전화번호 : " << tel << endl;
        cout << "학과 : " << department << endl;
        cout << "주소 : " << address << endl;
    }
};
int main() {
    // 자료형 : struct student(C++에서는 student만 써도 가능)
    Student stu1;
    stu1.studentNum = 2215;
    stu1.name = "장지안";
    stu1.tel = "010-5725-0524";
    stu1.department = "뉴미디어소프트웨어과";
    stu1.address = "경기도 의왕시 청계동";

    stu1.print();

    return 0;

}


