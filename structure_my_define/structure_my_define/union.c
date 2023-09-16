#include<stdio.h>


//union Un
//{
//	char c;//1
//	int i;//4
//
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &(u));
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//}

//写一个程序判断大小端存储
////方法一
// 
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
// 
////方法二
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//
//}
//int main()
//{
//	int a = 1;
//	int ret=check_sys();
//	if (1==ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//}


union Un
{
	int a;
	char arr[5];

};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	
}