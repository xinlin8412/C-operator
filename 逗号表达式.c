#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//���ű��ʽ�������ö��Ÿ����Ķ�����ʽ�����ű��ʽ��������������ִ�У��������ʽ�Ľ���������һ�����ʽ�Ľ����
//����1
int main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1); //���ű��ʽ
	printf("%d\n", c);  //���Ϊ13
	return 0;
}


//����2
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	if (a = b + 1, c = a / 2, b > 0)
//		printf("%d", b);
//}


//����3
//a = get_val();  //a����1������
//count_val(a);  //count_val������a���в���
//while (a > 0);  //a > 0ִ������Ĳ���
//{
//	//ҵ����
//	a = get_val();  //a����1������
//	count_val(a);  //count_val������a���в���
//}
//
////ʹ�ö��ű��ʽ����д����Ĵ���
//while (a = get_val(), count_val(a), a > 0)
//{
//	//ҵ����
//}