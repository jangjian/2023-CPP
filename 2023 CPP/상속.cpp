#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal(int age, string name) : age_(age), name_(name) 
	{
		cout << "���� ������" << endl; 
		
	}
	~Animal() { cout << "���� �Ҹ���" << endl; }
	// ���� ���ε�
	virtual void Bark(void) { cout << "���� ¢�´�" << endl; }
	virtual void Eat(void) { cout << "���� �Դ´�" << endl; }
	virtual void Hunt(void) { cout << "���� ����Ѵ�" << endl; }

private:
	int age_;
	string name_;
};

class Crane : public Animal
{
public:
	// ������ ����� ��� �Ű������� ���� �θ�����ڰ� ȣ��ȴ�.
	Crane(int age, string name, int leg_length) : Animal(age, name)
	{
		cout << "�η�� ������" << endl; 
		leg_length_ = leg_length;
	}
	~Crane() { cout << "�η�� �Ҹ���" << endl; }	// �ڽ� Ŭ������ ���߿� �����ǰ� �θ� Ŭ�������� ���� ȣ��ȴ�.

	// ��Ÿ���� �Ǽ��� �����ϱ� ���� override Ű���带 ���(Java�� @override)
	void Bark() override
	{
		cout << "�η�η�" << endl;
	}
private:
	int leg_length_;
};

int main(void)
{
	Animal* animal= new Crane(3, "����", 108);	// �θ��� ��������� ���
	animal->Bark();	// �η�η�
	delete animal;

	return 0;
}