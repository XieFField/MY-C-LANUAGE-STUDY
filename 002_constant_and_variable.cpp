#include<stdio.h>//std��ʾ��׼�ģ�io��ʾ��������,.h��ʾͷ�ļ�
#define price 100  //define��ʾ�ض��� �����Ƕ���price=100
/*ͷ�ļ����ô�;*/

int x;//�������涨��x,y,z��������
int y;
int z;
int myfunction()//�Լ�����һ������
{
	extern int x;//��������������
	extern int y;
	extern int z;
	x = 1;
	y = 100;
	z = 12;

	return x + y + z;
}

int main()//������
{
	////=========��������ϰ�ĵ�һ������==============

	//int number;//int number��ʾ����һ������number
	//int totalValue;//int totalValue��ʾ����һ������totalValue
	//int price_of_apple;
	//number = 10;
	//totalValue = number * price;
	//printf("totalValue=%d\n", totalValue);
	//printf("�ܼ�ֵΪ %d\n", totalValue);
	//return 0;

	//============��������ϰ�ĵڶ�������==================
	//extern int x;//��������������
	//extern int y;
	//extern int z;

	int result;
	result = myfunction();
	printf("���յļ�����Ϊ:%d", result);
	return 0;
}



