#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	unsigned int n, r, nmr,nfac=1,rfac=1,nmrfac=1,i,nprmofac=1,result1,result2,result3,result4 ;      
	printf(" ���� N�� R�� �����Ͻÿ�");     // nfac������ n! rfac������ r! nmrfac������ (n-r)! nprmofac������ (n+r-1)!�� �ǹ��� 
	scanf_s("%u %u\n", &n, &r);
	
	if (n == 0 || r == 0)                   // ����ڰ� 0�� ������ ��� ���ǵ� �� ������ �̴� ������ 
		printf("����� �� ���ڸ� �Է��Ͻÿ�");

	else if (n >= r)                        // ����ڰ� ������ ���� ��� ���ǵǴ� ��� 
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

		result4 = n * nprmofac / nfac / rfac;     // �ߺ������� Ǯ� ����� 

		printf("����= %u\n�ߺ�����=%u\n����=%u\n�ߺ�����=%u\n", result1, result2, result3, result4);
	}

	else (n < r);                     // ����ڰ� �Է��� ���� 0�� �ƴϳ� �Ϻθ� ���ǵǴ� ���  
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

		printf("����= ���ǵ��� �ƴ���\n�ߺ�����=%u\n����=���ǵ��� �ƴ���\n�ߺ�����=%u\n",  result2, result4);
	}
	
	return 0; 
}