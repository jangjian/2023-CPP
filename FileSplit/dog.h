#pragma once

#include "all.h"; 

class Dog : public Animal{
public:
	void bark(void)
	{
		cout << "¸Û¸Û" << endl;
	}
private:
	int speed;
};
