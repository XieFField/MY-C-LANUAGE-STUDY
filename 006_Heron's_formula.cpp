#include<stdio.h>
#include<math.h>//������Ӧ��ͷ�ļ�������ʹ�ÿ����ŵĺ���

//int main(void)
//{
//	//================����һ�����׹�ʽ�������������====================
//
//	float a;//�������������ͱ���
//	float b;
//	float c;
//
//	float p;//���������εİ��ܳ�
//
//	float area;
//
//	printf("���������������߳�\n");
//	printf("�ֱ�˳������ a , b , c�ĳ��� \n");//������߳�ʱ��Ҫʹ��Ӣ�����뷨
//
//
//	scanf_s("%f , %f , %f  ", &a , &b , &c);//scanf_sΪ���뺯��, &Ϊȡ��ַ��
//
//	p = 0.5 * ( a + b + c);
//
//	area = sqrt(p * (p - a) * ( p - b ) * ( p - b) );//sqrt���ǿ���
//
//	printf("a = %f , b = %f , c = %f , p = %f \n", a , b , c , p );
//
//	printf("area = %f \n", area);
//
//	return 0;
//}


//===============��������Ӽ�������һ����д��ĸ��Ҫ�����Сд��ĸ����==========

//int main(void)
//{
//	char c1;
//	char c2;
//
//	printf("������һ����д��ĸ��");
//
//	c1 = getchar();//getchar������������c1�ַ�
//	printf("%c , %d \n", c1 , c1);//ͬһ���ַ�c1���ַ���ʮ���Ƶ���ʽ�ֱ����
//	
//	c2 = c1 + 32;//��32����Ϊ��д��ĸ��Сд��ĸ��ASCII���ϲ�ֵΪ32
//
//	printf("%c , %d \n", c2, c2);
//
//
//
//
//
//	return 0;
//}

//======����������:��ax^2 + bx + c = 0���̵ĸ�(����һԪ���η���)=============

int main(void)
{
	//a , b , c �ɼ���������b^2 - 4ac > 0

	float a;//��������ϵ��
	float b;
	float c;
	
	float x1;//���������������
	float x2;

	float delta;

	printf("��ֱ�����һԪ���η���ax^2 + bx + c = 0�е� a , b , c\n");
	printf("�����ʽ���磺 a=1,b=3,c=4,\n");
	scanf_s("a = %f , b = %f , c = %f ", &a, &b, &c);//���뺯��

	delta = b * b - 4 * a * c;

	if (delta >= 0)
	{
		x1 = (-b + (sqrt(delta))) / (2 * a);//sqrt()Ϊ����
		x2 = (-b - (sqrt(delta))) / (2 * a);
		printf(" x1 = %f , \n x2 = %f ,", x1, x2);
	}
	else
	{
		printf("�÷����޽�");
	}

	
	return 0;
}