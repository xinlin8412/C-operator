#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
* 算术转换：
* 如果某个操作符的各个操作数属于不同的类型，那么除非其中一个操作数的转换为另一个操作数的类型，否则操作无法进行。
* 下面的层次体系称为寻常算术转换。
* long double
* double
* float
* unsigned long int
* long int
* unsigned int
* int
* 
* 如果某个操作数的类型在上面这个列表排名较低，那么首先要转换另外一个操作数的类型后执行运算。
* 
* 警告：但是算术转换要合理，不然会有一些潜在的问题
* folat f = 3.14;
* int num = f; //隐式转换会丢失精度。
*/

//int main()
{
	float f = 3.14;  ////隐式转换会丢失精度。
	int num = f;
	printf("%d\n", num);
	return 0;
}


//实例1,这个表达式看着没问题，实际是有问题的
int main()
{
	int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6;
	int num = a * b + c * d + f * e;
	printf("%d\n", num);
	return 0;
}


//实例2.
int main()
{
	int i = 10;
	i = i-- - -- i * (i = -3) * i++ + ++i;
	printf("%d\n", i);
	return 0;
	//这个表达式在不同的编译器中会有不同的结果
}


//实例3
int fun()
{
	static a = 1;  //在static修饰局部变量后，该变量只在初次运行时进行初始化工作，且只进行一次
	return a++;
}
int main()
{
	int answer = 0;
	answer = fun() + fun() * fun(); //因为这里的函数名都一样，函数的调用先后顺序无法通过操作符的优先级确定。
	printf("%d\n", answer);
	return 0;
}