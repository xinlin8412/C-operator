#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//�߼��������ֻ�����Ϊ0,�ұ߲�����ʲô�������ˣ������ұ�Ϊ�滹��Ϊ�٣���Ϊ���յĽ��Ϊ�٣��߼������߶�Ϊ�棬�����Ϊ��
int main()
{
	int a = 0, b = 2, c = 3, d = 4;
	int i = a++ && ++b && d++;
	printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d); 
	//���Ϊa = 0, b = 2, c = 3, d = 4
	return 0;
}

int main()
{
	int a = 1, b = 2, c = 3, d = 4;
	int i = a++ && ++b && d++;
	printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);
	//���Ϊa = 2, b = 3, c = 3, d = 5��
	return 0;
}


//�߼���������Ϊ�棬�ұ߲�����ʲô�������ˣ������ұ�Ϊ�滹��Ϊ�٣�
int main()
{
	int a = 1, b = 2, c = 3, d = 4;
	int i = a++ || ++b || d++;
	printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);
	//���Ϊa = 2, b = 2, c = 3, d = 4  ��Ϊa||bΪ�棬���Ժ���Ĳ�����
	return 0;
}
	