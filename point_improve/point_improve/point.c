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
//	//"abcdef"�����ַ���
//	//*p = 'w';
//	printf("%s\n", p);
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";//��ַ��ͬ
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
//	char arr2[] = "abcdef";//��ַ��ͬ
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



//ָ������ ������ �������ָ���

//int main()
//{
//	int arr[1] = { 0 };
//	char ch[5] = { 0 };
//	int* parr[4];//�������ָ�������,ָ������
//	char* pch[5];//����ַ�ָ������飬ָ������
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
//	//����ָ��-ָ�������ָ��-��������ָ��
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//�����p��������ָ��
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
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ-����ָ�������
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
////1.дһ������ָ��pf����ָ��my_strcpy
//char* (*pf)(char*, const char*);
////2.дһ������ָ������pfArr,�ܹ����4��my_strcpy�����ĵ�ַ
//char* (*pfArr[4])(char*, const char*);


//������
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
//	printf("����������������:>");
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
//		printf("��ѡ��:>");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//	
//		}
//		else if(input==0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//	int (*pf)(int, int);//����ָ��
//
//	int(*pfarr[4])(int, int);//pfarr ��һ������-����ָ�������
//	int(*(ppfarr)[4])(int,int) = &pfarr;//ppffarr��һ������ָ�룬ָ��ָ����������ĸ�Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int,int)
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



//ð������
//qsort -��������������������
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
	//�Ƚ���������ֵ
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
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp����
	return strcmp( ((struct Stu*)e1)->name ,((struct Stu*)e2)->name );
}


void test3()
{
	int i = 0;

	struct Stu s[3] = { {"����",28},{"����",30},{"����",10} };
	int  sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]),cmp_stu_by_age);
	//��һ���������������������Ԫ�ص�ַ
	//�ڶ��������������������Ԫ�ظ���
	//�����������������������ÿ��Ԫ�صĴ�С
	//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�صķ����ĺ�����ַ-�������ʹ�����Լ�ʵ��
	//   ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ



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
//ʵ��ð������ĳ���Ա�����Ƿ�֪��δ�����������-��֪��
//Ҳ��֪�����Ƚϵ�����Ԫ�ص�����
void bubble_sort(void *base,int sz,int width, int (*cmp)(const void* e1, const void* e2))//width �ֽ�
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�رȽ�
			if (cmp((char*)base+j*width,(char*)base + (j +1)* width)>0)
				//����
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
	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ�������ʲô����
	//��Ӧ��֪����αȽ����������е�Ԫ��

	bubble_sort(arr, sz,sizeof(arr[0]) ,cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", arr[i]);

	}

}

void test5()
{
	struct Stu s[3] = { {"����",28},{"����",30},{"����",10} };
	int  sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz,sizeof(s[0]),cmp_stu_by_age);
}


int main()
{
	//ð������ֻ��������������

	//int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	//int  sz = sizeof(arr) / sizeof(arr[0]);
	//struct Stu s[3] = { {"����",28},{"����",30},{"����",10} };
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
//void *�ɴ��κ����͵ĵ�ַ



