#include <stdio.h>
#pragma warning(suppress : 4996)

int main(void)
{
	unsigned int n, i, jul = 1;                      // jul�� ���� ���� ���� �Ǹ��ϴ� ������ 
	printf("���� �Է��Ͻÿ�");
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
		for (i = 1; i < n - (jul - 1) / 2; i++)            // �� �ڵ忡�� jul�� �׻� Ȧ���� �ٷ�� �Ϳ� ������ �� 
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