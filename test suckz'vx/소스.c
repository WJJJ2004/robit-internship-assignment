#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	unsigned int n, jul = 1, i;

	printf("값을 입력하시오 ");
	scanf_s("%u\n", &n);

	while (jul < n)
	{
		for (i = 1; i < jul; ++i)
			printf("*");
		for (i = i; i < 2 * n - jul + 1; ++i)
			printf(" ");
		for (i = i; i < 2 * n + 1; ++i)
			printf("*\n");
		jul = jul++;
	}
	if (jul == n)
	{
		for (i = 1; i < 2 * n + 1; ++i)
			printf("*\n");
		jul = jul++;
	}
	while (jul > n)
	{
		for (i = 1; i < 2 * n - jul + 1; ++i)
			printf("*");
		for (i = i; i < jul + 1; ++i)
			printf(" ");
		for (i = i; i < 2 * n + 1; ++i)
			printf("*\n");
		jul = jul++;

		if (jul > 2 * n) break;
	}

	return 0;

}
