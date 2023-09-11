#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


/*
* 位操作符有：
*  & -->按位与
*  | -->按位或
*  ^ -->按位异或
* 注意：他们的操作数必须是整数
*/

//1 -->按位与
int main()
{
	//& -->按2进制位与
	//我们拿到的都是二进制的补码，如果是负数也要先转换为补码
	int a = 3;
	int b = 5;
	int c = a & b;
	//3的二进制0000000000000000000000000000011
	//5的二进制0000000000000000000000000000101
	//结果为-->0000000000000000000000000000001  两个二进制里面有一个为0就为0，只有两个都为1才为1
	printf("c = %d", c);
	return 0;
}

//2. | -->按位或,按2进制位或
int main()
{
	int a = 3;
	int b = 5;
	int c = a | b;
	//3的二进制0000000000000000000000000000011
	//5的二进制0000000000000000000000000000101
	//结果为-->0000000000000000000000000000111  转换为10进制结果是7，两个二进制里面有一个为1就为1，同时为1也为1，同时为0时就为0
	printf("c = %d\n", c);
	return 0;

}

//3. ^-->按位异或，按2进制位异或
int main()
{
	int a = 3;
	int b = 5;
	int c = a ^ b;
	//3的二进制0000000000000000000000000000011
	//5的二进制0000000000000000000000000000101
	//结果为-->0000000000000000000000000000110  转化为10进制位6，相同为0，相异为1
	printf("c = %d\n", c);
	return 0;
}


//用异或交换两个数，不使用第三变量
int main()
{
	int a = 10;
	int b = 20;
	printf("交换前a = %d\n", a);
	printf("交换前b = %d\n", b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后a = %d\n", a);
	printf("交换后b = %d\n", b);
	return 0;
}

//求一个数在二进制中存储1的个数,此方法适合正整数，不适合负数
int main()
{
	//此方法适合正整数，不适合负数
	int a = 10;
	int count = 0;
	while (a)
	{
		if (a % 2 == 1) // 如果a % 2 余数为1，计数器加1，如果不等于就执行a / 2
		{
			count++;
		}
		a = a / 2;
	}
	printf("存储1的个数为%d\n", count);
	return 0;
}


//求一个数在二进制中存储1的个数,下面这种方法可以使用负数:
int main()
{
	int num = 0;
	printf("请输入一个数：");
	scanf("%d", &num);
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)  //这里的i<32是32个比特位
	{
		//if ((num & 1) == 1) //按位与二进制里面有一个为0就为0，只有两个都为1才为1，
		if (1 == ((num >> i) & 1))
			//运算顺序(num >> i)，因为i第一次循环等于0，所有向右移动0位, 因为num右移没有重新赋给变量，所有是一个固定的二进制，随着i的变化，一次性移动几位
		{
			count++;
		}
		//num = num >> 1; //右移操作符，循环一下就向右移动一位
	}
	printf("二进制里面存储了%d个1", count);
	return 0;

}