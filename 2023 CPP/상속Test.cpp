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
        cout << "이름 : " << name_ << endl;
        cout << "학번 : " << hakbun_ << endl;
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
        cout << "대학교 : " << university_ << endl;
    }

private:
    string university_;
};

int main()
{
    Person person("장지안", 2215);
    person.PrintShow();

    Student student("김아무개", 20053, "서울대학교");
    student.PrintShow();

    return 0;
}