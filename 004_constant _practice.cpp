#include<stdio.h>
#define WIDTH 1 //define��ʾԤ����
#define HIGHT 2
#define ENTER '\n'
#define PI 3.1415926
//define�Ƕ��峣����һ�ַ���
int main()
{
	//=====================������ϰһ=========================

	//int area;//����һ�����ͱ���
	//area = WIDTH * HIGHT;
	//printf("���ε����Ϊ %d", area);
	//printf("%c", ENTER);//��ΪENTERԤ��������ַ�����������Ҫ���ַ�����ʽ���

	//====================������ϰ��==================

	const int HIGHT1 = 10;//const int ��ʾ����һ�����ͳ���
	const int WIDTH1 = 20;
	//const int �� int������������ const int ������ǳ����� int �������һ������
	const char NEWLINE = '\n';//����һ�������ַ�����

	int area;//ע��int�������һ�����ͳ�����Ū���int��const int������

	area = WIDTH1 * HIGHT1;

	//��ʼ���ı�����ָ���Ǳ���û�н��и��ƣ�����δ��ʼ��Ҳ��ָû�н��и�ֵ

	printf("�������ֵΪ: %d", area);
	printf("%c", NEWLINE);


	return 0;
}