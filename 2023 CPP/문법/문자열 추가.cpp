// C
#include <stdio.h>
#include <string.h>		// std::string Ŭ����

// C++
#include <iostream>
#include <string>	

using namespace std; 

int main(void) {
	char str1[30] = "Jiwoo";
	char str2[30] = "Rock";

	// str2�� ���ڿ��� str1(������)�� �߰�
	strcat(str1, str2);

	printf("%s \n", str1);

	return 0;
}

