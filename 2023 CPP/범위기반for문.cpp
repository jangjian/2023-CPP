#include <iostream>

using namespace std;

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };

	for (int x : arr) 
		cout << x << endl;

	return 0;
}