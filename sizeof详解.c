#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	short s = 0; //short��ʾһ�������ͣ���׼����short�����ͱ���������16λ���������ֽ�
	int a = 10;
	printf("%d\n", sizeof(s = a + 5)); //����������͵Ĵ�С�����Ϊ2����Ϊshort���Ͳ�����16λ�������ֽڣ�sizeof��������ı��ʽ���������㡣
	printf("%d\n", s); //��ӡ0����ӡ��s
	return 0;
}

int main()
{
	int a = 15; //a = 0��a = 100,����ֻռ4���ֽڣ���Ϊ��int����
	printf("%d\n", sizeof(a));
}


void test_1(int arr[])  //�����arr[]ʵ���Ǹ�ָ�룬��������������Ԫ�صĵ�ַ
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
	int arr[10] = { 0 };  //int����4���ֽ�
	char ch[10] = { 0 };  //char����1���ֽ�
	short cd[10] = { 0 }; //short�����ͣ���׼�����������ֽ�
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(ch));
	printf("%d\n", sizeof(cd));

//���鴫��ֻ�ᴫ�ݹ�ȥ��Ԫ�صĵ�ַ�����Ե���ָ�������գ���ָ���С��4����8���ֽڣ�����������32λ����64λ�ģ�32λ��ָ��Ϊ4���ֽڡ�
	test_1(arr);
	test_2(ch);
	test_3(cd);
	return 0;
}