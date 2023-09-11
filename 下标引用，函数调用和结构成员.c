#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.下标引用操作符:
//操作数：一个数组名 + 一个索引值
//int arr[10] = { 0 };  //创建数组
//arr[9] = 10;  //使用下标引用操作符
//[]的两个操作数是arr和0

//2.函数调用操作符（），函数调用操作符接受一个或者多个操作数：第一个操作数是函数名，剩下的操作数是传递给函数的参数。
//求两个数的值
int get_max(int x, int y) //这个地方的括号不是函数调用操作符
{
	if (x > y)
	{
		return x;
	}
	return y;
}

int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b); //在函数调用这个地方的括号（）就是函数调用操作符，
	printf("max = %d", max);
	return 0;
}

//创建一个结构体类型-struct Stu
struct Stu
{
	//成员变量
	char name[20];  //学生姓名，这里用一个char类型的数组来接收
	int age;        //学生姓名，用int类型来接收
	char id[20];    //学生学号，用char类型来接收一个数字串
};

int main()
{
	//使用struct Stu这个类型创建了一个学生对象s1,并初始化
	struct Stu s1 = { "张三", 20, "2023091001" };
	//利用.操作符访问结构体成员
	//结构体变量.成员
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	struct Stu* s2 = &s1;
	//箭头操作符 ->
	//结构体指针 -> 成员们
	printf("%d\n", s2->age);
	printf("%s\n", s2->name);
	printf("%s\n", (*s2).name);  //*s2解引用操作，和->一样
	printf("%d\n", (*s2).age);
	return 0;
}
