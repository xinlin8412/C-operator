#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
* ����ת����
* ���ĳ���������ĸ������������ڲ�ͬ�����ͣ���ô��������һ����������ת��Ϊ��һ�������������ͣ���������޷����С�
* ����Ĳ����ϵ��ΪѰ������ת����
* long double
* double
* float
* unsigned long int
* long int
* unsigned int
* int
* 
* ���ĳ������������������������б������ϵͣ���ô����Ҫת������һ�������������ͺ�ִ�����㡣
* 
* ���棺��������ת��Ҫ������Ȼ����һЩǱ�ڵ�����
* folat f = 3.14;
* int num = f; //��ʽת���ᶪʧ���ȡ�
*/

//int main()
{
	float f = 3.14;  ////��ʽת���ᶪʧ���ȡ�
	int num = f;
	printf("%d\n", num);
	return 0;
}


//ʵ��1,������ʽ����û���⣬ʵ�����������
int main()
{
	int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6;
	int num = a * b + c * d + f * e;
	printf("%d\n", num);
	return 0;
}


//ʵ��2.
int main()
{
	int i = 10;
	i = i-- - -- i * (i = -3) * i++ + ++i;
	printf("%d\n", i);
	return 0;
	//������ʽ�ڲ�ͬ�ı������л��в�ͬ�Ľ��
}


//ʵ��3
int fun()
{
	static a = 1;  //��static���ξֲ������󣬸ñ���ֻ�ڳ�������ʱ���г�ʼ����������ֻ����һ��
	return a++;
}
int main()
{
	int answer = 0;
	answer = fun() + fun() * fun(); //��Ϊ����ĺ�������һ���������ĵ����Ⱥ�˳���޷�ͨ�������������ȼ�ȷ����
	printf("%d\n", answer);
	return 0;
}