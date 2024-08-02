#include<stdio.h>//std表示标准的，io表示输入和输出,.h表示头文件
#define price 100  //define表示重定义 这里是定义price=100
/*头文件不用打;*/

int x;//函数外面定义x,y,z三个变量
int y;
int z;
int myfunction()//自己定义一个函数
{
	extern int x;//函数内声明变量
	extern int y;
	extern int z;
	x = 1;
	y = 100;
	z = 12;

	return x + y + z;
}

int main()//主函数
{
	////=========这是我练习的第一个程序==============

	//int number;//int number表示定义一个变量number
	//int totalValue;//int totalValue表示定义一个变量totalValue
	//int price_of_apple;
	//number = 10;
	//totalValue = number * price;
	//printf("totalValue=%d\n", totalValue);
	//printf("总价值为 %d\n", totalValue);
	//return 0;

	//============这是我练习的第二个程序==================
	//extern int x;//函数内声明变量
	//extern int y;
	//extern int z;

	int result;
	result = myfunction();
	printf("最终的计算结果为:%d", result);
	return 0;
}



