#include <iostream>
#include <string>	

using namespace std;

struct Person
{
    int height;
    int weight;
};

// ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
// ����ü, Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ� �սô�
// class�� default�� private (struct�� default�� public)
class Student
{
public:
    // ������(constructor) : ��ü�� ������ �� ȣ��Ǵ� �Լ�
    // �����ڸ� �������� ������ default�� �Ű������� ���� �����ڰ� ���ǵȴ�.
    Student()
    {
        studentNum = 2215;
        name = "������";
        tel = "010-5725-0524";
        department = "���̵�����Ʈ�����";
        address = "��⵵ �ǿս� û�赿";
    }

    Student(int _studentNum, string _name, string _tel, string _department, string _address) {
        studentNum = _studentNum;
        name = _name;
        tel = _tel;
        department = _department;
        address = _address;
    }
    // class�� ��� �Լ��� ���� �� �ִ�.
    void print(void) {
        cout << "�й� : " << studentNum << endl;
        cout << "�̸� : " << name << endl;
        cout << "��ȭ��ȣ : " << tel << endl;
        cout << "�а� : " << department << endl;
        cout << "�ּ� : " << address << endl;
    }
    
private :
    // ���� ������ studentNum�� ���ڿ��� ���� ����
    // �Ϲ������� ���ڿ��� ������ �����ͺ��� ���� �޸� ������ �䱸�ϸ�
    // ������ �񱳿����� �ѹ��� �� �� ������, ���ڿ��� ���ڼ���ŭ �ݺ��Ͽ� ���ؾ� ��.
    int studentNum;
    string name;
    string tel;
    string department;
    string address;
   
    
};
int main() {
    // �ڷ��� : struct student(C++������ student�� �ᵵ ����)
    //Student stu1(2215, "������", "010-5725-0524", "���̵�����Ʈ�����", "��⵵ �ǿս� û�赿");

    Student stu1 = Student();

    // stu1.print();

    Student stu2 = Student(2215, "������", "010-5725-0524", "���̵�����Ʈ�����", "��⵵ �ǿս� û�赿");

    // stu2.print();

    struct Person p;
    p.height = 186;
    p.weight = 82;

    struct Person* ptr = &p;

    // �� �� ���� ���
    cout << "Ű : " << ptr->height << endl;
    cout << "������ : " << (*ptr).weight << endl;

    return 0;

}


