#include<stdio.h>

int main(void)
{
	int a = 1;
	int b = 3;

	printf("a + b = %d\n", a + b);

	int c = a - b;
	printf("c = %d \n", c);

	int d;
	d = a * b ;
	printf("d = %d \n", d);

	int e;
	e = a / b;
	printf("e = %d \n",e );//计算结果将出现0,是因为%d是取十进制整数

	int f;
	f = a % b;//%表示取余数
	printf("f = %d \n", f);//计算结果将出现1,因为商数为0，余数为1，所以取1

	int g , h , i;
	h = 100;
	i = 20;
	g = i % h;
	printf("g= %d \n", g);//计算结果出现20,因为商数为0，余数为20，所以取20

	int j;
	j = a++;//a++指a在进行运算后自增1,这里是将a赋值给c，然后a再自增1
	printf("j = %d \n", j);

	int k;
	k = ++a;//这里输出了k等于3，是因为前面a进行运算完自增1，然后这里a在进行运算前自增1,所以k赋值为3
	printf("k = %d \n", k);

	//自减的道理相同，懒得继续写了

	if (a == b)//注意=的意义是赋值， ==的意义才是等于
	{
		printf("我草你妈,a现在等于b \n");
	}
	else//意义为否则
	{
		printf("我喜欢你,a现在不等于b \n\n");
	}

	if (a >= b )//此为大于或等于 
	{
		printf("我讨厌你，a怎么会大于或者等于b\n");
	}
	else
	{
		printf("我喜欢你，a小于b才是合理的嘛~\n");
	}

	if (a <= b)//此为小于或等于
	{
		printf("我喜欢你，a小于或等于b\n");
	}
	else
	{
		printf("我讨厌你，a怎么会大于b\n");
	}



	if (a && b)//这个是如果a且b为真，"为真"的意思就是a和b的值不为0
	{
		printf("条件为真\n");
	}
	else
	{
		printf("条件不为真\n");
	}

	if (a || b)// a || b是a或b为真的意思
	{
		printf("a或b为真\n");
	}


	if (!(a & b))//!()的意思是非，也就是()里的内容不为真
	{
		printf("条件不为真\n");
	}


	return 0;
}