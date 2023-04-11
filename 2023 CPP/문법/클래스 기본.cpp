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
    // �����ڴ� ��ȯ���� ���� �ʴ´�.
    // �����ڸ� �������� ������ default�� �Ű������� ���� �����ڰ� ���ǵȴ�.
    Student()
    {
        studentNum = 2215;
        name = "������";
        tel = "010-5725-0524";
        department = "���̵�����Ʈ�����";
        address = "��⵵ �ǿս� û�赿";
    }

    Student(int _studentNum, string _name, string _tel, string _department, string _address)
        // ������� �ʱ�ȭ, const/������ ������� ��밡��
        : studentNum(_studentNum), name(_name), tel(_tel), department(_department), address(_address)
    {
      
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

    // �����Ҵ� : ������ �ð��� �޸� ũ�Ⱑ ����
    // Student stu2 = Student(2215, "������", "010-5725-0524", "���̵�����Ʈ�����", "��⵵ �ǿս� û�赿");
    //  stu2.print();

    /*Student stu3[2];
    for (int i = 0; i < 2; i++) {
        stu3[i].print();
    }*/


    //�����Ҵ� : ����ð�(running time)�� �޸� ũ�Ⱑ ����(�޸� heap ����)
    // �����Ҵ�� ������ �����ͷ� �����Ѵ�.
    //Student* stu3 = new Student(22, "����", "010-0000-0000", "����", "�Ѽ�");
    //stu3->print();    // stu3�� ����� ->���� ����

    //�����Ҵ� ����(���ϸ� �޸� ���������� �߻�)
    //delete stu3;

    Student* stu4 = new Student[2];

    for (int i = 0; i < 2; i++) {
        stu4[i].print();    // stu4[i]�� ����� .���� ����
    }

    delete[] stu4;

    return 0;

}


