#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.�±����ò�����:
//��������һ�������� + һ������ֵ
//int arr[10] = { 0 };  //��������
//arr[9] = 10;  //ʹ���±����ò�����
//[]��������������arr��0

//2.�������ò������������������ò���������һ�����߶������������һ���������Ǻ�������ʣ�µĲ������Ǵ��ݸ������Ĳ�����
//����������ֵ
int get_max(int x, int y) //����ط������Ų��Ǻ������ò�����
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
	int max = get_max(a, b); //�ں�����������ط������ţ������Ǻ������ò�������
	printf("max = %d", max);
	return 0;
}

//����һ���ṹ������-struct Stu
struct Stu
{
	//��Ա����
	char name[20];  //ѧ��������������һ��char���͵�����������
	int age;        //ѧ����������int����������
	char id[20];    //ѧ��ѧ�ţ���char����������һ�����ִ�
};

int main()
{
	//ʹ��struct Stu������ʹ�����һ��ѧ������s1,����ʼ��
	struct Stu s1 = { "����", 20, "2023091001" };
	//����.���������ʽṹ���Ա
	//�ṹ�����.��Ա
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	struct Stu* s2 = &s1;
	//��ͷ������ ->
	//�ṹ��ָ�� -> ��Ա��
	printf("%d\n", s2->age);
	printf("%s\n", s2->name);
	printf("%s\n", (*s2).name);  //*s2�����ò�������->һ��
	printf("%d\n", (*s2).age);
	return 0;
}
