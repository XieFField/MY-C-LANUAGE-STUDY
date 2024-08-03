#include<stdio.h>
#include<math.h>//引入相应的头文件，才能使用开根号的函数

//int main(void)
//{
//	//================程序一：海伦公式计算三角形面积====================
//
//	float a;//定义三个浮点型变量
//	float b;
//	float c;
//
//	float p;//定义三角形的半周长
//
//	float area;
//
//	printf("请输入程序的三条边长\n");
//	printf("分别按顺序输入 a , b , c的长度 \n");//在输入边长时，要使用英文输入法
//
//
//	scanf_s("%f , %f , %f  ", &a , &b , &c);//scanf_s为输入函数, &为取地址符
//
//	p = 0.5 * ( a + b + c);
//
//	area = sqrt(p * (p - a) * ( p - b ) * ( p - b) );//sqrt就是开方
//
//	printf("a = %f , b = %f , c = %f , p = %f \n", a , b , c , p );
//
//	printf("area = %f \n", area);
//
//	return 0;
//}


//===============程序二：从键盘输入一个大写字母，要求改用小写字母输入==========

//int main(void)
//{
//	char c1;
//	char c2;
//
//	printf("请输入一个大写字母：");
//
//	c1 = getchar();//getchar函数用来接收c1字符
//	printf("%c , %d \n", c1 , c1);//同一个字符c1以字符和十进制的形式分别输出
//	
//	c2 = c1 + 32;//加32是因为大写字母和小写字母在ASCII表上差值为32
//
//	printf("%c , %d \n", c2, c2);
//
//
//
//
//
//	return 0;
//}

//======第三个程序:求ax^2 + bx + c = 0方程的根(即求一元二次方程)=============

int main(void)
{
	//a , b , c 由键盘输入设b^2 - 4ac > 0

	float a;//定义输入系数
	float b;
	float c;
	
	float x1;//定义输出的两个根
	float x2;

	float delta;

	printf("请分别输入一元二次方程ax^2 + bx + c = 0中的 a , b , c\n");
	printf("输入格式例如： a=1,b=3,c=4,\n");
	scanf_s("a = %f , b = %f , c = %f ", &a, &b, &c);//输入函数

	delta = b * b - 4 * a * c;

	if (delta >= 0)
	{
		x1 = (-b + (sqrt(delta))) / (2 * a);//sqrt()为开方
		x2 = (-b - (sqrt(delta))) / (2 * a);
		printf(" x1 = %f , \n x2 = %f ,", x1, x2);
	}
	else
	{
		printf("该方程无解");
	}

	
	return 0;
}