#include <iostream>
#include <string.h>		// std::string Ŭ����

int main(void) {
	std::string str1;
	std::string str2 = "Jiwoo";

	// str1�� str2�� ������ ����ְڴ�.
	str1 = str2;

	std::cout << str1 << std::endl;

	return 0;
}

