#include "animal.h"
#include "cat.h"
#include "dog.h"

using namespace std;

int main(void)
{
	Animal a;
	Dog poppi;
	Cat nabi;

	a.bark();
	poppi.bark();
	nabi.bark();

	return 0;
}