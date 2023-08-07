#include<stdio.h>
#include<string.h>
#include <windows.h> 
//int  i = 0;
//int main() {
//	while (1) {
//		if (i % 2 == 0) {
//			printf(" *** *** \n");
//			printf("*********\n");
//			printf(" *******\n");
//			printf("  ****\n");
//			printf("   **\n");
//		}
//		else
//		{
//			printf("\n");
//			printf("   ** ** \n");
//			printf("  *******\n");
//			printf("   *****\n");
//			printf("    **\n");
//		}
//		Sleep(1);
//		i++;
//		system("cls");
//	}
//}

//int main() {
//    char arr1[] = "abc";
//    char arr2[] = { 'a','b','c'};
//    printf("%d\n", strlen(arr1));
//    printf("%d\n", strlen(arr2));
//    return 0;
//}
//int main() {
//	printf("%c\n",'\x22');
//	return 0;
//}
//int input = 0;
//int main() {
//	printf("加入比特\n");
//	printf("你要好好学习吗?(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//
//
//}

//int main() {
//	int line = 0;
//	printf("加入比特\n");
//	while (line<20000)
//	{
//		line++;
//		printf("敲一行代码: %d\n",line);
//		
//	}
//	if(line>=20000)
//	printf("好offer\n");
//
//	return 0;
//
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//
//}
//int main()
//{
//
//	int  num1 = 10;
//	int  num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1, num2);//Add自定义函数
//	sum = Add(a, b);
//	sum = Add(2, 3);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main(){
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//
//
//	}
//int main() {
//	int a = 2;//<<左移>>右移 整形1占4个字节-32bit位 00000000000000000000000001左边丢弃右边补0
//
//	int b = a >>1;
//
//	printf("%d\n", b);
//
//
//}
//int main() {//二进制操作
//	int a = 3;//011
//	int b = 5;//101
//	int c = a^ b;//&按位与：全1则1 |按位或 ^a：有1则1 按位异或:对应的二进制位相同1，不同0
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
	//int a = 10;
	//printf("%d\n", a);//c语言表示真假，0假，其余均为真
	//printf("%d\n", !a);//!；逻辑反操作 真改假 假改真
	//return 0;
	//int a = +3;//正号省略
//	int sz = 0;
//	int a = 10;
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sizeof(a));//计算变量/类型所占空间大小，单位字节 
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof sz);//变量能省略括号，类型不行
//
//}




//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//	int main() 
//	{
//		int  num1 = 10;
//		int num2 =20;
//		int max = 0;
//		max = Max(num1, num2);
//		printf("max=%d\n", max);
//		return 0;
//
//	
//	
//	
//	}
//int main() {
//
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };//int[6]
//
//	printf("%d\n", sizeof a );
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr));//6*4
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//
//	return 0;
//
//}


//int main() {
//	int a = 0; //四个字节32个bit
//
//		int b = ~a;//b是有符号的整形
//		//按（二进制）位取反0101-1010
//		printf("%d\n", b);//000000000000000000000000000000000000000
//						  //111111111111111111111111111111111111111
//						  //111111111111111111111111111111111111110
//						  //100000000000000000000000000000000000001 原码首位为符号位1负数0整数
//							//只要整数，内存中存储的都是二进制的补码
//
//							//原码，反码，补码   原码取反-反码+1-补码
//						//负数在内存中存储的时候，存储的是二进制的补码
//						//打印的是这个数的原码
//	return 0;
//}

//int main() {
//
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;//前置++，先++,再使用
//	int b = --a;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//
//}

//int main() {
//
//	int a = (int)3.14;//强制类型转换double-->int
//	return 0;
//}

//int main() {
//
//	int a = 3;
//	int b = 5;
//	int c = a && b;//&&逻辑与 ||逻辑或
//	printf("c=%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//若真则a执行，若假则b执行//三目操作符/条件操作符
//
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	printf("%d\n", max);
//
//
//}

//int main() {
//
//
//	int arr[10] = { 0 }; 
//		arr[4];//[]下标引用操作符
//
//}

//函数调用操作符
//int Add(int x, int y)
//int sum=Add(a,b);

//int main() {
//	int i, j, k;
//	printf("\n");
//	for (i = 1; i < 5; i++)
//		{
//		for (j = 1; j < 5;j++) 
//		{
//			for (k = 1; k < 5; k++)
//				{
//
//				if (i != j && i != j && j != k)
//				{
//					printf("%d,%d,%d\n", i, j, k);
//				}
//
//				}
//
//
//
//			}
//
//
//
//		}
//	
//}
//
		//auto int a = 0;//局部变量-自动变量
//enum枚举 extern引入外部符号 struct结构体关键字 union联合体、共用体 void无空
//register int a=10;//建议把a定义成寄存器变量
//int定义的符号是有符号的int 与sgined int等价
//unsign int无符号
//typedef 类型定义-类型重定义
//typedef unsigned int u_int;
//u_int num2 = 20;


////static使局部变量生命周期变长,static修饰全局变量，改变了变量的作用域-让
// 静态的全局变量只能在自己所在的源文件内部使用
// 出了源文件就不能使用了
// static修饰函数,也是改变了函数的连接属性
// 外部链接属性-->内部连接属性
//void test() {
//	 static int a = 1;//a是一个静态的局部变量，第一次初始化，之后不销毁
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main() {
//int i = 0;
//while (i < 5)
//{
//	test();
//	i++;
//
//
//}
//return 0;
//}
//int main() {
//
//	extern int g_val;
//	printf("%d\n", g_val);
//}
//extern int Add(int, int);
//int main()
//{
//
//	int  a = 10;
//	int  b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//define宏的定义
//#define MAX(x,y) (x>y?x:y)
//int main() {
//
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max=%d\n", max);
//}
  

//一个指针 4个字节（32位）8个字节（64位）
//int main() {
//
//	int a = 10;
//	int* p = &a;//取地址 p是指针变量
//	printf("%p\n", p);
//	*p = 20;//*-解引用操作符 
//	printf("a=%d\n", sizeof(p));
//}
//有一种变量是用来存放地址-指针变量
//int main() {
//
//	int a = 10;
//	printf("%p\n", &a);
//
//}


//结构体-我们自己创造的一种类型
//struct Book
//{
//
//	char name[20];
//	short price;
//
//};
//int main() {
//	struct Book b1 = { "c语言程序设计",55 };
//	strcpy(b1.name, "C++");//strcpy-string copy -字符串拷贝-库函数-string.h
//	struct Book* pb = &b1;
//	//printf("%s\n", b1.name);
//	//printf("%d\n", b1.price);
//	//b1.price = 15;
//	//printf("%d\n", b1.price);
//	//printf("%s\n", (*pb).name);
//	//printf("%d\n", (*pb).price);
//	printf("%s\n", pb->name);//name为数组名，是一个地址
//	printf("%d\n", pb->price);
//
//
//
//}

//int main() {
//
//
//	int age =29;
//	if (age < 18)
//		{printf("未成年\n");
//      printf("不满18岁")；//多条语句加大括号
// }
//	else if (age < 28 && age >= 18)
//		printf("青年\n");
//	else
//		printf("成年\n");
//}


void print(int n)
{
	if (n > 9)
	{
		printf(n / 10);
	}
	printf("%d ", n % 10);
}
int main() {

	unsigned int num = 0;//无符号 全为正数
	scanf_s("%d", &num);// 1234
	//递归
	print(num);
	//printf(1234)
	//printf(123)4
	//printf(12)34
	//printf(1)234
	return 0;

}