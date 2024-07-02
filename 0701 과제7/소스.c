#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	unsigned int n, r, nmr,nfac=1,rfac=1,nmrfac=1,i,nprmofac=1,result1,result2,result3,result4 ;      
	printf(" 숫자 N과 R을 선택하시오");     // nfac변수는 n! rfac변수는 r! nmrfac변수는 (n-r)! nprmofac변수는 (n+r-1)!을 의미함 
	scanf_s("%u %u\n", &n, &r);
	
	if (n == 0 || r == 0)                   // 사용자가 0을 대입한 경우 정의될 수 있으나 이는 배제함 
		printf("제대로 된 숫자를 입력하시오");

	else if (n >= r)                        // 사용자가 대입한 값이 모두 정의되는 경우 
	{
		for (i = 1; i < n + 1; ++i)
			nfac = nfac * i;
		for (i = 1; i < n - r + 1; ++i)
			nmrfac = nmrfac * i;
		for (i = 1; i < r + 1; ++i)
			rfac = rfac * i;
		for (i = 1; i < n + r; ++i)
			nprmofac = nprmofac * i;

		result1 = nfac / nmrfac;

		for (i = 1; i < r + 1; i++);
		{
			result2 = 1;
			result2 = result2 * n;
		}

		result3 = nfac / (nmrfac * rfac);

		result4 = n * nprmofac / nfac / rfac;     // 중복조합을 풀어서 계산함 

		printf("순열= %u\n중복순열=%u\n조합=%u\n중복조합=%u\n", result1, result2, result3, result4);
	}

	else (n < r);                     // 사용자가 입력한 값이 0이 아니나 일부만 정의되는 경우  
	{
		for (i = 1; i < r + 1; i++)
		{
			result2 = 1;
			result2 = result2 * n;
		}
		for (i = 1; i < n + 1; ++i)
			nfac = nfac * i;
		for (i = 1; i < r + 1; ++i)
			rfac = rfac * i;
		for (i = 1; i < n + r; ++i)
			nprmofac = nprmofac * i;

		result4 = n * nprmofac / nfac / rfac;

		printf("순열= 정의되지 아니함\n중복순열=%u\n조합=정의되지 아니함\n중복조합=%u\n",  result2, result4);
	}
	
	return 0; 
}