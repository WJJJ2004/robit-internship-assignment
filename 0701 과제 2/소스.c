#include <stdio.h>
#pragma warning(suppress : 4996)

int main(void)
{
	unsigned int a = 0, b = 1, i = 3, n;               // a�� ������ Ȧ������ �� , b�� ������ ¦����°���� �ǹ���, a�� b�� ���� ���װ� �ι�°������ �ʱ�ȭ�� 
	printf("n���� �Է��Ͻÿ�\n");                      // ���� i�� ���� ���� �Ѿ�� ������ ����ϴ� ������ 
	scanf_s("%u", &n);

	if (n == 1) printf("�Ǻ���ġ�� =0");

	else if (n == 2) printf("�Ǻ���ġ��=1");

	else if (n == 0) printf("���� ���� ����");         // unsigned int���� �Ǻ���ġ ��Ģ�� ������� �ƴ� �ϴ� 1,2�װ� 0�� �׸��� 3�׺��� N�ױ��� 3 ���� �и��� 

	else
		
		while (1)
		{
			a = a + b;
			if (i == n)
				{
				printf("�Ǻ���ġ��=%u", a);
				break;
				}
			i = ++i;
			b = a + b;
			if (i == n)
				{
				printf("�Ǻ���ġ��=%u", b);
				break;
				}
			i = ++i;
		}
}