#include <iostream>
#include <string>	

using namespace std;

// ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
// ����ü, Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ� �սô�
struct Student
{
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
    struct Student stu1;
    stu1.studentNum = 2215;
    stu1.name = "������";
    stu1.tel = "010-5725-0524";
    stu1.department = "���̵�����Ʈ�����";
    stu1.address = "��⵵ �ǿս� û�赿";

    cout << "�й� : " << stu1.studentNum << endl;
    cout << "�̸� : " << stu1.name << endl;
    cout << "��ȭ��ȣ : " << stu1.tel << endl;
    cout << "�а� : " << stu1.department << endl;
    cout << "�ּ� : " << stu1.address << endl;


    return 0;

}


