#include<stdio.h>

#define ARRAY 5

int main(void)
{
	//int a[10];//整形数组a里有10个元素
	//float b[10], c[20];//浮点数组b 10个元素, c 20个元素

	//char ch[10];//字符数组 ch 10个元素
	//int MINE[ARRAY+2];
	//int HIS[ARRAY + 20];

	/*int num = 10;
	int HER[num];*/ //num并非一个常量，所以不可以直接这样子表达,num本身是被定义的一个变量，
	                //只不过num被赋值了5，相反，define才是用来定义一个常量

	/*for (int i = 0; i < 10; i++)//输出数组要和循环体系使用
	{
		printf(" 元素打印：%d \n",a[i]);
	}//这里将会输出垃圾值，是因为数组没有进行初始化，即没有赋值
	*/


	//int you[10] = { 1,2,3,4,5 };
	//int me[5] = { 1.2,2.3,3.6,};
	//for (int i = 0; i < 10;i++)
	//{
	//	printf("元素1打印%d \n", you[i]);//因为只有五个初始化数值，所以只会打印出五个有效值,由于是int类型所以后续打印出0	
	//}

	//for (int o = 0; o < 5; o++)
	//{
	//	printf("元素2打印%f \n", me[o]);
	//}


	//int j;
	//int k[10];
	//for (j = 0; j <= 9; j++)
	//{
	//	k[j] = j;//j自加之后才对k[j]进行初始化
	//}
	//for (j = 9; j >= 0; j--)
	//{
	//	printf("元素3打印%d \n", k[j]);//数组的下标是从0开始计数
	//}


	//int i;
	//int a1[10];
	//for (i = 0; i < 10;)
	//{
	//	a1[i++] = 2 * i + 1;

	//}

	//for (i = 0; i <= 9; i++)
	//{
	//	printf("元素4打印%d \n", a1[i]);
	//}
	//printf("\n%d %d\n", a1[5], a1[6]);//数组里的下标数要整数

//用元素赋值只能逐个赋值，不能直接给整个数组赋值

	//数组的动态赋值
	int i , max;
	int s[10];
	printf("input 10 number:\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &s[i]);//输入函数
	}

	max = s[0];
	for (i = 1; i < 10; i++)
	{
		if (s[i] > max)
		{
			max = s[i];
		}
	}
	printf("the max num is %d\n", max);

	return 0;
}