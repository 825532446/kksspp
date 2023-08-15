#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main() {
//	char ch = 'w';
//	char* pc = &ch;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//}


//int main()
//{
//	 const char* p = "abcdef";
//	//"abcdef"常量字符串
//	//*p = 'w';
//	printf("%s\n", p);
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";//地址不同
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 ==arr2)
//	{
//		printf("hehe\n");
//
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";//地址不同
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (*p1 == *p2)
//	{
//		printf("hehe\n");
//
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}



//指针数组 是数组 用来存放指针的

//int main()
//{
//	int arr[1] = { 0 };
//	char ch[5] = { 0 };
//	int* parr[4];//存放整形指针的数组,指针数组
//	char* pch[5];//存放字符指针的数组，指针数组
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6};
//	int arr3[] = { 3,4,5,6,7 };
//	int *parr[] = {arr1,arr2,arr3};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//
//	int* p =NULL;
//	char* pc = NULL;
//	//数组指针-指向数组的指针-存放数组的指针
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//上面的p就是数组指针
//
//}
/*int main()
{

	char* arr[5];
	char (*pa)[5] = &arr;

	int arr
}*/

// int main()
//{
//
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}

//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//
//
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));
//	printf("%d\n", (***pa)(2, 3));
//	printf("%d\n", (pa)(2, 3));
//
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int Sub(int x, int y)
//{
//	int z = 0;
//	z = x - y;
//	return z;
//
//}
//int Mul(int x, int y)
//{
//	int z = 0;
//	z = x * y;
//	return z;
//
//}
//int Div(int x, int y)
//{
//	int z = 0;
//	z = x /y;
//	return z;
//
//}
//int main()
//{
//	int* arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址-函数指针的数组
//	int (*pa)(int, int) = Add;//Sub/Mul/Div/
//	int (*parr[4])(int, int) = {Add,Sub,Mul,Div};
//	int i = 1;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//
//
//}

//char* my_strcpy(char* dest, const char* src);
////1.写一个函数指针pf，能指向my_strcpy
//char* (*pf)(char*, const char*);
////2.写一个函数指针数组pfArr,能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const char*);


//计算器
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int Sub(int x, int y)
//{
//	int z = 0;
//	z = x - y;
//	return z;
//
//}
//int Mul(int x, int y)
//{
//	int z = 0;
//	z = x * y;
//	return z;
//
//}
//int Div(int x, int y)
//{
//	int z = 0;
//	z = x / y;
//	return z;
//
//}
//
//void Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//
//Calc(int (*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	printf("情输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x,y));
//}
//void menu()
//{
//
//	printf("***********************************\n");
//	printf("******  1.add       2.sub    ******\n");
//	printf("******  3.mul       4.div    ******\n");
//	printf("******  5.xor       0.exit   ******\n");
//	printf("***********************************\n");
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//			
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//	
//		}
//		else if(input==0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//	int (*pf)(int, int);//函数指针
//
//	int(*pfarr[4])(int, int);//pfarr 是一个数组-函数指针的数组
//	int(*(ppfarr)[4])(int,int) = &pfarr;//ppffarr是一个数组指针，指针指向的数组有四个元素
//	//指向的数组的每个元素的类型是一个函数指针 int(*)(int,int)
//	return 0;
//
//
//}

//void print(char* str)
//{
//	printf("hehe:%s", str);
// 
//}
//
//void  test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//}



//冒泡排序
//qsort -可以排序任意类型数据
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
struct Stu
{
	char name[20];
	int age;
};

void qsort(void* base,
	size_t num,
	size_t width,
	int(*cmp)(const void* e1, const void* e2)
);


int cmp_int(const void* e1, const void* e2)
{
	//比较两个整形值
	return *(int*)e1 - *(int*)e2;
}

void test1()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int  sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);

	}

}

int cmp_float(const void* e1, const void* e2)
{
	//if (*(float*)e1 == *(float*)e2)
	//{
	//	return 0;
	//}
	//else if (*(float*)e1 > *(float*)e2)
	//{
	//	return 1;
	//}
	//	
	//else
	//	return -1;
	return ((int)(*(float*)e1 - *(float*)e2));
}

void test2()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);

	}
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2)
{
	//比较名字就是比较字符串
	//字符串比较不能直接用><=来比较，应该用strcmp函数
	return strcmp( ((struct Stu*)e1)->name ,((struct Stu*)e2)->name );
}


void test3()
{
	int i = 0;

	struct Stu s[3] = { {"张三",28},{"李四",30},{"王五",10} };
	int  sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]),cmp_stu_by_age);
	//第一个参数：待排序数组的首元素地址
	//第二个参数：待排序数组的元素个数
	//第三个参数：待排序数组的每个元素的大小
	//第四个参数：是函数指针，比较两个元素的方法的函数地址-这个函数使用者自己实现
	//   函数指针的两个参数是：待比较的两个元素的地址



	for (i = 0; i < sz; i++)
	{
		printf("%s  ", s[i]);

	}
}


void Swap(char*buf1,char*buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
//实现冒泡排序的程序员，他是否知道未来排序的类型-不知道
//也不知道待比较的两个元素的类型
void bubble_sort(void *base,int sz,int width, int (*cmp)(const void* e1, const void* e2))//width 字节
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素比较
			if (cmp((char*)base+j*width,(char*)base + (j +1)* width)>0)
				//交换
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
				
			}
		}
	}
}

void test4()
{
	int i = 0;
	int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
	int  sz = sizeof(arr) / sizeof(arr[0]);
	//使用bubble_sort的程序员一定知道自己排序是什么数据
	//就应该知道如何比较排序数组中的元素

	bubble_sort(arr, sz,sizeof(arr[0]) ,cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", arr[i]);

	}

}

void test5()
{
	struct Stu s[3] = { {"张三",28},{"李四",30},{"王五",10} };
	int  sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz,sizeof(s[0]),cmp_stu_by_age);
}


int main()
{
	//冒泡排序只能排序整形数组

	//int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	//int  sz = sizeof(arr) / sizeof(arr[0]);
	//struct Stu s[3] = { {"张三",28},{"李四",30},{"王五",10} };
	//float f[] = {9.0,8.0,7.0,6.0,5.0,4.0};
	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//int i = 0;
	//bubble_sort(arr, sz);
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d",arr[i]);

	//}
	//return 0;
	/*test1();*/
	//test2();
	//test3();
	test4();
	test5();
}
//void *可存任何类型的地址



