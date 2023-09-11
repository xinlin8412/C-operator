//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

int main()
{
	//除法
	int a = 5 / 2; //商2余1，两边都是整形，所有结果也是整形
	printf("a = %d", a);
	printf("\n");
	double b = 5.0 / 2; //结果为2.500000，要想得到浮点数，可以在两边写上一个小数，
	printf("b = %lf", b);
	printf("\n");
	//取余
	int c = 5 % 2;
	printf("c = %d", c); //结果为1，求余只能用于整形，不支持浮点数
	return 0;
}