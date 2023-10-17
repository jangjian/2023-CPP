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


	// 꽉 찬 공간에 새로운 데이터를 넣어보자
	// 크기가 확장된 임시공간을 만든다.
	int* temp = new int[6];
	// 기존의 값을 복사한다.
	for (int i = 0; i < 4; i++) {
		temp[i] = arr[i];
	}

	vector<int>::iterator iter;
	for (iter = arr.begin(); iter != arr.end(); iter++)
		cout << *iter << " ";
	// 기존 공간 삭제
	delete[] arr;
	//arr이 새로운 공간을 가리킴
	arr = temp;
	//새로운 값을 넣어줌
	arr[4] = 50;

	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";

	delete[] arr;
	return 0;
}