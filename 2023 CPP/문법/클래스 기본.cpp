#include <iostream>
#include <string>	

using namespace std;

// ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
// ����ü, Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ� �սô�
// class�� default�� private (struct�� default�� public)
class Student
{
    // ���� ������ studentNum�� ���ڿ��� ���� ����
    // �Ϲ������� ���ڿ��� ������ �����ͺ��� ���� �޸� ������ �䱸�ϸ�
    // ������ �񱳿����� �ѹ��� �� �� ������, ���ڿ��� ���ڼ���ŭ �ݺ��Ͽ� ���ؾ� ��.
private :
    int studentNum;
    string name;
    string tel;
    string department;
    string address;

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
   
    // class�� ��� �Լ��� ���� �� �ִ�.
    void print(void) {
        cout << "�й� : " << studentNum << endl;
        cout << "�̸� : " << name << endl;
        cout << "��ȭ��ȣ : " << tel << endl;
        cout << "�а� : " << department << endl;
        cout << "�ּ� : " << address << endl;
    }
};
int main() {
    // �ڷ��� : struct student(C++������ student�� �ᵵ ����)
    Student stu1;
    

    stu1.print();

    return 0;

}


