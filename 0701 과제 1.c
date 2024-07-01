#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	double num1, num2, num3, num4, num5, min, max, sum, ave = 0;
	printf("1번째 실수를 입력하시오. ");
	scanf("%lf", &num1);
	printf("%lf\n", num1);

	printf("2번째 실수를 입력하시오. ");
	scanf("%lf", &num2);
	printf("%lf\n", num2);
	min = (num1 > num2) ? num2 : num1;
	max = (num1 > num2) ? num1 : num2;
	sum = num1 + num2;

	printf("3번째 실수를 입력하시오. ");
	scanf("%lf", &num3);
	printf("%lf\n", num3);
	min = (num3 > min) ? min : num3;
	max = (num3 > max) ? num3 : max;
	sum = sum + num3;

	printf("4번째 실수를 입력하시오. ");
	scanf("%lf", &num4);
	printf("%lf\n", num4);
	min = (num4 > min) ? min : num4;
	max = (num4 > max) ? num4 : max;
	sum = sum + num4;

	printf("5번째 실수를 입력하시오. ");
	scanf("%lf", &num5);
	printf("%lf\n", num5);
	min = (num5 > min) ? min : num5;
	max = (num5 > max) ? num5 : max;
	sum = sum + num5;

	ave = sum / 5;

	printf("----결과----\n평균은%lf입니다\n최댓값은 %lf입니다\n최솟값은 %lf입니다 ",ave,max,min);
	return 0; 
}