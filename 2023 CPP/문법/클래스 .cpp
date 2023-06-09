#include <iostream>
#include <string.h>	

using namespace std;

class Employee {
public:
	Employee() {

	}
	Employee(string name_, int id_, int age_, double salary_)
		: name(name_), id(id_), age(age_), salary(salary_)
	{

	}
	void PrintInfo(void) {
		cout << "이름 : " << name << endl;
		cout << "사번 : " << id << endl;
		cout << "나이 : " << age << endl;
		cout << "급여 : " << salary << endl;
	}
	void set_name(string name_) { name = name_; }
	void set_id(int id_) { id = id_; }
	void set_age(int age_) {age = age_; }
	void set_salary(double salary_){ salary = salary_; }

private:
	string name;
	int id;
	int age;
	double salary;
};


int main(void) {
	Employee* emp1 = new Employee("장지안", 2215, 18, 10000.0);
	emp1->PrintInfo();

	printf("\n");

	Employee* emp2 = new Employee[2];
	emp2[0].set_name("차은우");
	emp2[0].set_id(1234);
	emp2[0].set_age(27);
	emp2[0].set_salary(90000.0);

	for (int i = 0; i < 1; i++) {
		emp2[i].PrintInfo();  
	}

	delete emp1;
	delete[] emp2;

	return 0;
}