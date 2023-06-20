#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal(int age, string name) : age_(age), name_(name) 
	{
		cout << "���� ������" << endl; 
		
	}

	// �Ҹ��ڿ��� ������ virtual�� ����(�޸� ���� ����)
	virtual ~Animal() { cout << "���� �Ҹ���" << endl; }

	// ���� ���ε�(�����Լ�)
	// ������ �߻����� �����̹Ƿ� �Լ��� ��ü���� ����(����)�� �ڽ�Ŭ��������(���� �����Լ�)
	virtual void Bark(void) = 0;
	virtual void Eat(void) = 0;
	virtual void Hunt(void) = 0;

private:
	int age_;
	string name_;
};

class Crane : public Animal
{3
public:
	// ������ ����� ��� �Ű������� ���� �θ�����ڰ� ȣ��ȴ�.
	Crane(int age, string name, int leg_length) : Animal(age, name)
	{
		cout << "�η�� ������" << endl; 
		leg_length_ = leg_length;
	}
	virtual ~Crane() { cout << "�η�� �Ҹ���" << endl; }	// �ڽ� Ŭ������ ���߿� �����ǰ� �θ� Ŭ�������� ���� ȣ��ȴ�.

	// ��Ÿ���� �Ǽ��� �����ϱ� ���� override Ű���带 ���(Java�� @override)
	void Bark() override
	{
		cout << "�η�η�" << endl;
	}

	// ���������Լ�(�߻�޼���)�� �ݵ�� �ڽĿ��� �����ؾ� �Ѵ�
	void Eat() override {}
	void Hunt() override {}

private:
	int leg_length_;
};

int main(void)
{
	// �߻�Ŭ����(�ϳ��� �߻�޼��尡 �����ϴ� Ŭ����)�� ��ü(instance)�� ���� �� ����
	// Animal* animal = new Animal(1, "1");

	Animal* animal= new Crane(3, "����", 108);	// �θ��� ��������� ���
	animal->Bark();	// �η�η�
	delete animal;

	return 0;
}