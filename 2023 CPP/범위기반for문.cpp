#include <iostream>

using namespace std;

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };

	// �������� a�� �ڷ����� int�̴�.
	auto a = 4; 
	
	// x�� �ڷ����� int�� �ڵ�����
	for (auto x : arr) 
		cout << x << endl;

	return 0;
}