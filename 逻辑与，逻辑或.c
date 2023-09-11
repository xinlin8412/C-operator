#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//逻辑与操作，只有左边为0,右边不管是什么都不算了，不管右边为真还是为假，因为最终的结果为假，逻辑与两边都为真，结果才为真
int main()
{
	int a = 0, b = 2, c = 3, d = 4;
	int i = a++ && ++b && d++;
	printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d); 
	//结果为a = 0, b = 2, c = 3, d = 4
	return 0;
}

int main()
{
	int a = 1, b = 2, c = 3, d = 4;
	int i = a++ && ++b && d++;
	printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);
	//结果为a = 2, b = 3, c = 3, d = 5。
	return 0;
}


//逻辑或。如果左边为真，右边不管是什么都不算了，不管右边为真还是为假，
int main()
{
	int a = 1, b = 2, c = 3, d = 4;
	int i = a++ || ++b || d++;
	printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);
	//结果为a = 2, b = 2, c = 3, d = 4  因为a||b为真，所以后面的不用算
	return 0;
}
	