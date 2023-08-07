#include<stdio.h>

//int main() {
//
//
//
//	int a = 3;
//	int b = 5;
//	int tmp = 0;
//	printf("before : a=%d b=%d\n", a, b);
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	//加减法
//
//	printf("after : a=%d b=%d\n", a, b);
//}
//int main() {
//
//	int num = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (1==((num >>i) &1))
//		{
//			count++;
//		}
//	}
//	//32bit
//	// num&1==1
//	// 00000000000000000000000000000011
//	// 00000000000000000000000000000001
//	// 00000000000000000000000000000001
//	//统计补码中有几个一
//	//while (num != 0)
//	//{
//	//	if (num % 2 == 1)
//	//	{
//	//		count++;
//	//		num = num/2;
//	//	}
//	//}
//
//	printf("%d\n", count);
//	return 0;
//

struct Stu
{

	char name[20];
	int age;
	char id[20];

};
int main()
{
	int a = 10;
	struct Stu s1 = { "张三",20,"3245234523" };
	struct Stu*ps = &s1;
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);

	//printf("%s\n", s1.name);
	//printf("%d\n", s1.age);
	//printf("%s\n", s1.id);
	return 0;

}