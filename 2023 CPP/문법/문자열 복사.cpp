#include <stdio.h>
#include <string.h>		// ���ڿ� �Լ��� �������

int main(void) {
	char str1[30] = "";
	char str2[30] = "Jiwoo";

	// str1�� str2�� ������ ����ְڴ�.
	strcpy(str1, str2);

	printf("%s\n", str1);

	return 0;
}

