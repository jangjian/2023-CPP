#include <stdio.h>

int main(void)
{
	printf("2 X 1 = 2\n");
	printf("2 X 2 = 4\n");
	printf("2 X 3 = 6\n");
	printf("2 X 4 = 8\n");
	printf("2 X 5 = 10\n");
	printf("2 X 6 = 12\n");
	printf("2 X 7 = 14\n");
	printf("2 X 8 = 16\n");
	printf("2 X 9 = 18\n");

	printf("3 X 1 = 3\n");
	printf("3 X 2 = 6\n");
	printf("3 X 3 = 9\n");
	printf("3 X 4 = 12\n");
	printf("3 X 5 = 15\n");
	printf("3 X 6 = 18\n");
	printf("3 X 7 = 21\n");
	printf("3 X 8 = 24\n");
	printf("3 X 9 = 27\n");

	printf("4 X 1 = 4\n");
	printf("4 X 2 = 8\n");
	printf("4 X 3 = 12\n");
	printf("4 X 4 = 16\n");
	printf("4 X 5 = 20\n");
	printf("4 X 6 = 24\n");
	printf("4 X 7 = 28\n");
	printf("4 X 8 = 32\n");
	printf("4 X 9 = 36\n");
	for (int i = 2; i <= 9; i++)
	{
		printf("%d X 1 = %d\n", i, i * 1);
		printf("%d X 2 = %d\n", i, i * 2);
		printf("%d X 3 = %d\n", i, i * 3);
		printf("%d X 4 = %d\n", i, i * 4);
		printf("%d X 5 = %d\n", i, i * 5);
		printf("%d X 6 = %d\n", i, i * 6);
		printf("%d X 7 = %d\n", i, i * 7);
		printf("%d X 8 = %d\n", i, i * 8);
		printf("%d X 9 = %d\n", i, i * 9);
	}

	return 0;
}