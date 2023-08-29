#pragma once

#include "all.h"; 

class Cat : public Animal {
public:
	void bark(void)
	{
		cout << "¾ß¿Ë" << endl;
	}
private:
	int craw;
};
