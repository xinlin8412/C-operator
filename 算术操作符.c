//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

int main()
{
	//����
	int a = 5 / 2; //��2��1�����߶������Σ����н��Ҳ������
	printf("a = %d", a);
	printf("\n");
	double b = 5.0 / 2; //���Ϊ2.500000��Ҫ��õ�������������������д��һ��С����
	printf("b = %lf", b);
	printf("\n");
	//ȡ��
	int c = 5 % 2;
	printf("c = %d", c); //���Ϊ1������ֻ���������Σ���֧�ָ�����
	return 0;
}