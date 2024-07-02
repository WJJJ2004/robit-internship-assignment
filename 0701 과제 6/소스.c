#include <stdio.h>
#pragma warning(suppress : 4996)

int main(void)
{
	unsigned int n, i, jul = 1;                      // jul은 세로 방향 줄을 의마하는 변수임 
	printf("값을 입력하시오");
	scanf_s("%u", &n);

	if (jul = 1)
	{
		for (i = 1; i < n; i++)
			printf(" ");
		printf("*\n\n");
		jul = jul + 2;
	}
	if (jul < 2 * n - 1)
	{
		for (i = 1; i < n - (jul - 1) / 2; i++)            // 이 코드에서 jul은 항상 홀수만 다루는 것에 유의할 것 
			printf(" ");
		printf("*");

		for (; i < n + (jul - 1) / 2; i++)
			printf(" ");
		printf("*");

		for (; i < 2 * n; i++)
			printf(" \n\n");
		jul = jul + 2;
	}

	if (jul = 2 * n - 1)
	{
		for (i = 1; i < 2 * n; i++)
			printf("*");
	}

	return 0;
}