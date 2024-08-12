#include<stdio.h>

int main()
{

	int n;
	for (n = 10; n <= 20; n++)
	{
		if (n % 3 == 0)// n除以3取余数为0
		{
			continue;//结合本次循环开启下一个循环
		}
		printf("n的过程值为%d\n", n);
	}
	printf("n的最终值为%d\n", n);
	return 0;
}