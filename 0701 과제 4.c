#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996) 

int main(void)
{
	double a, b,result;
	char oper;                                                        // ������ 
	int Doper;                                                        // �������� �ƽ�Ű�ڵ� ����ȭ

	printf("Input Arithmetic Operation\n");
	printf("ex)\t\t3.4*8.5\n\t\t2.9-5.4\n\t\t3.9*8.0\n\t\t3.9^8\n\n");

	scanf("%lf %c %lf", &a, &oper, &b);

	printf("input: % lf % c % lf ", a, oper, b);

	Doper = (int)oper;
	
	if (Doper==94)                                                   // ^�� �ƽ�Ű�ڵ�
	{
		if (b < 0) printf("error");

		else if (b = 0) printf("result: 1");

		else if (b == (int)b)
		{

			for (b; b = 0; b--)
			{
				result = a * a;
				printf("result : %lf", result);
			}
		}
		else printf("error");
	}
	else if (Doper==43)                                              // + �� �ƽ�Ű �ڵ�
		{
		result = a + b;
		printf("result : %lf", result);
		}
	else if (Doper==45)                                              // -�� �ƽ�Ű �ڵ� 
	{
		result = a - b;
		printf("result : %lf", result);
	}
	else if (Doper==42)                                              // *�� �ƽ�Ű �ڵ� 
	{
		result = a * b;
		printf("result : %lf", result);
	}
	else if (Doper == 47)                                            // /�� �ƽ�Ű�ڵ�    
	{
		if (b == 0)printf("errror");
		else
		{
			result = a / b;
			printf("result : %lf", result);

		}
	}
	else
		printf("error");
	
	return 0;
}
	