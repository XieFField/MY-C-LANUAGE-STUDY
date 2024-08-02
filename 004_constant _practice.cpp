#include<stdio.h>
#define WIDTH 1 //define表示预定义
#define HIGHT 2
#define ENTER '\n'
#define PI 3.1415926
//define是定义常量的一种方法
int main()
{
	//=====================常量练习一=========================

	//int area;//定义一个整型变量
	//area = WIDTH * HIGHT;
	//printf("矩形的面积为 %d", area);
	//printf("%c", ENTER);//因为ENTER预定义的是字符，所以这里要以字符的形式输出

	//====================常量练习二==================

	const int HIGHT1 = 10;//const int 表示定义一个整型常量
	const int WIDTH1 = 20;
	//const int 和 int的最大区别就是 const int 定义的是常量而 int 定义的是一个变量
	const char NEWLINE = '\n';//定义一个整型字符常量

	int area;//注意int定义的是一个整型常量，弄清楚int和const int的区别

	area = WIDTH1 * HIGHT1;

	//初始化的变量，指的是变量没有进行复制，常量未初始化也是指没有进行赋值

	printf("矩形面积值为: %d", area);
	printf("%c", NEWLINE);


	return 0;
}