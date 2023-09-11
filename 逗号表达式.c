#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//逗号表达式，就是用逗号隔开的多个表达式。逗号表达式，从左向右依次执行，整个表达式的结果，是最后一个表达式的结果。
//代码1
int main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1); //逗号表达式
	printf("%d\n", c);  //结果为13
	return 0;
}


//代码2
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	if (a = b + 1, c = a / 2, b > 0)
//		printf("%d", b);
//}


//代码3
//a = get_val();  //a等于1个函数
//count_val(a);  //count_val函数对a进行操作
//while (a > 0);  //a > 0执行下面的操作
//{
//	//业务处理
//	a = get_val();  //a等于1个函数
//	count_val(a);  //count_val函数对a进行操作
//}
//
////使用逗号表达式，改写上面的代码
//while (a = get_val(), count_val(a), a > 0)
//{
//	//业务处理
//}