#include<stdio.h>

int main()
{

	int n;
	for (n = 10; n <= 20; n++)
	{
		if (n % 3 == 0)// n����3ȡ����Ϊ0
		{
			continue;//��ϱ���ѭ��������һ��ѭ��
		}
		printf("n�Ĺ���ֵΪ%d\n", n);
	}
	printf("n������ֵΪ%d\n", n);
	return 0;
}