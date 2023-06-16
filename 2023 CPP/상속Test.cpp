#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person(string name, int hakbun) : hakbun_(hakbun), name_(name)
    {

    }

    void PrintShow()
    {
        cout << "�̸� : " << name_ << endl;
        cout << "�й� : " << hakbun_ << endl;
    }

private:
    int hakbun_;
    string name_;
};

class Student : public Person
{
public:
    Student(string name, int hakbun, string university) : Person(name, hakbun), university_(university)
    {

    }

    void PrintShow()
    {
        Person::PrintShow();
        cout << "���б� : " << university_ << endl;
    }

private:
    string university_;
};

int main()
{
    Person person("������", 2215);
    person.PrintShow();

    Student student("��ƹ���", 20053, "������б�");
    student.PrintShow();

    return 0;
}