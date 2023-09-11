#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	short s = 0; //short表示一个短整型，标准定义short短整型变量不低于16位，即两个字节
	int a = 10;
	printf("%d\n", sizeof(s = a + 5)); //这里计算类型的大小，结果为2，因为short类型不低于16位，两个字节，sizeof括号里面的表达式不参与运算。
	printf("%d\n", s); //打印0，打印的s
	return 0;
}

int main()
{
	int a = 15; //a = 0和a = 100,都是只占4个字节，因为是int类型
	printf("%d\n", sizeof(a));
}


void test_1(int arr[])  //这里的arr[]实际是个指针，用来接收数组首元素的地址
{
	printf("%d\n",sizeof(arr));  //8
	printf("%d\n", arr[0]);
}
void test_2(char ch[])
{
	printf("%d\n", sizeof(ch));  //8
}
void test_3(short cd[])
{
	printf("%d\n", sizeof(cd));   //8
}

int main()
{
	int arr[10] = { 0 };  //int类型4个字节
	char ch[10] = { 0 };  //char类型1个字节
	short cd[10] = { 0 }; //short短整型，标准不低于两个字节
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(ch));
	printf("%d\n", sizeof(cd));

//数组传参只会传递过去首元素的地址，所以得用指针来接收，而指针大小是4或者8个字节，看编译器是32位还是64位的，32位的指针为4个字节。
	test_1(arr);
	test_2(ch);
	test_3(cd);
	return 0;
}