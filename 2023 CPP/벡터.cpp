#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> arr;
	arr.reserve(4);
	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);
	arr.push_back(40);


	// �� �� ������ ���ο� �����͸� �־��
	// ũ�Ⱑ Ȯ��� �ӽð����� �����.
	int* temp = new int[6];
	// ������ ���� �����Ѵ�.
	for (int i = 0; i < 4; i++) {
		temp[i] = arr[i];
	}

	vector<int>::iterator iter;
	for (iter = arr.begin(); iter != arr.end(); iter++)
		cout << *iter << " ";
	// ���� ���� ����
	delete[] arr;
	//arr�� ���ο� ������ ����Ŵ
	arr = temp;
	//���ο� ���� �־���
	arr[4] = 50;

	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";

	delete[] arr;
	return 0;
}