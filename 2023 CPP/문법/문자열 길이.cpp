// C
#include <stdio.h>
#include <string.h>		// std::string Ŭ����

// C++
#include <iostream>
#include <string>	

using namespace std;

int main(void) {
	char str1[30] = "Jiwoo";
	int len = 0;

	for (int i = 0; str1[i] != '\0'; i++) {
		len++;
	}
	printf("���ڿ��� ���̴� %d \n", len);
	return 0;
}

