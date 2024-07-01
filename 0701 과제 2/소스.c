#include <stdio.h>
#pragma warning(suppress : 4996)

int main(void)
{
	unsigned int a = 0, b = 1, i = 3, n;               // a는 수열의 홀수번쨰 항 , b는 수열의 짝수번째항을 의미함, a와 b를 각각 초항과 두번째항으로 초기화함 
	printf("n값을 입력하시오\n");                      // 변수 i는 다음 차로 넘어가는 과정을 기록하는 변수임 
	scanf_s("%u", &n);

	if (n == 1) printf("피보나치수 =0");

	else if (n == 2) printf("피보나치수=1");

	else if (n == 0) printf("정의 하지 않음");         // unsigned int에서 피보나치 규칙에 적용되지 아니 하는 1,2항과 0항 그리고 3항부터 N항까지 3 경우로 분리함 

	else
		
		while (1)
		{
			a = a + b;
			if (i == n)
				{
				printf("피보나치수=%u", a);
				break;
				}
			i = ++i;
			b = a + b;
			if (i == n)
				{
				printf("피보나치수=%u", b);
				break;
				}
			i = ++i;
		}
}