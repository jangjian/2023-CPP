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
    // 생성자는 반환형을 쓰지 않는다.
    // 생성자를 정의하지 않으면 default로 매개변수가 없는 생성자가 정의된다.
    Student()
    {
      
    }

    Student(int _studentNum, string _name, string _tel, string _department, string _address)
        // 멤버변수 초기화, const/참조형 멤버변수 사용가능
        : studentNum(_studentNum), name(_name), tel(_tel), department(_department), address(_address)
    {
      
    }
    // class는 멤버 함수를 가질 수 있다.
    void print(void) {
        cout << "학번 : " << studentNum << endl;
        cout << "이름 : " << name << endl;
        cout << "전화번호 : " << tel << endl;
        cout << "학과 : " << department << endl;
        cout << "주소 : " << address << endl;
    }

    void set_studentNum(int _studentNum) { studentNum = _studentNum; }
    void set_name(string _name) { name = _name; }
    void set_tel(string _tel) { tel = _tel; }
    void set_department(string _department) { department = _department; }
    void set_address(string _address) { address = _address; }
    
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

    // 정적할당 : 컴파일 시간에 메모리 크기가 결정
    // Student stu2 = Student(2215, "장지안", "010-5725-0524", "뉴미디어소프트웨어과", "경기도 의왕시 청계동");
    //  stu2.print();

    /*Student stu3[2];
    for (int i = 0; i < 2; i++) {
        stu3[i].print();
    }*/


    // 동적할당 : 실행시간(running time)에 메모리 크기가 결정(메모리 heap 영역)
    // 동적할당된 공간은 포인터로 접근한다.
    // Student* stu3 = new Student(22, "율곡", "010-0000-0000", "유교", "한성");
    // stu3->print();    // stu3의 멤버는 ->으로 접근

    //동적할당 해제(안하면 메모리 누수현상이 발생)
    //delete stu3;

    Student* stu4 = new Student[2];
    stu4[0].set_name("박진영");
    stu4[0].set_address("니가사는그집");
    stu4[0].set_studentNum(1111);
    stu4[0].set_department("뉴미디어소프트웨어");
    stu4[0].set_tel("000-0000-0000");

    stu4[1].set_name("선미");
    stu4[1].set_address("서울어딘가");
    stu4[1].set_studentNum(1112);
    stu4[1].set_department("뉴미디어소프트웨어");
    stu4[1].set_tel("000-0000-0001");


    for (int i = 0; i < 2; i++) {
        stu4[i].print();    // stu4[i]의 멤버는 .으로 접근
    }

    delete[] stu4;

    return 0;

}


