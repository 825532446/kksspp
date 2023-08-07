#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//int get_max(int x, int y)//形参（是实参的一份临时拷贝，用完即销毁）
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}

//int a = 10;
	//int b = 20;
	//int max=get_max(a, b);//实参
	//printf("%d\n", max);


//void Sawp1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;//空间不变，交换不了,错误

//}	int a = 10;
//int b = 20;
//int tmp = 0;
///*tmp = a;
//a = b;
//b = tmp;*/
//Sawp(a, b);
//printf("%d %d\n", a, b);

// int Swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp=*pa;
//	*pa=*pb;
//	*pb = tmp;
//
//}
//int main() {
//
//	/*char arr[] = "Hello world!";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);*/
//
//	char arr1[] = "bit";
//	char arr2[20] = "######";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	int a =10;
//	int* pa = &a;
//	*pa = 20;//解引用操作
//	printf("%d\n",a);
//
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("%d %d\n", a, b);
//
//}

//判断素数
//int  is_prime(int n) {
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//
//	}
//	return 1;
//
//
//}
//int main () {
//	int i =0 ;
//	for (i = 1; i <= 200; i++)
//
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//
//		}
//	}
//}



//int is_leap_year(int y) {
//	if ((y % 4 == 0 && y % 100 != 0)||(y % 400 == 0))
//	{
//
//		return 1;
//	}
//	return 0;
//}
//int main() {
//
//	int year = 0;
//	for (year = 1000; year <= 2000; year++) {
//		if (1== is_leap_year(year))
//		{
//			printf("%d ", year);
//
//		}
//	}
//}

//int binary_search(int arr[],int k,int sz)//arr[]本质是指针
//{
//	
//	int left = 0;
//	int right = sz - 1;
//	while (right >= left)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid ]> k)
//		{
//			right = mid - 1;
//			
//		}
//		 else if (arr[mid] < k)//注意else if
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;
//	}
//		return -1;
//
//}
//int main() {
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr, k,sz);
//	if (ret == -1) {
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//}




//void Add(int* p)
//{
//	(*p)++;//++y优先级高
//}
//int main() {
//
//
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//
//}


//int main() {
//
//	printf("%d", printf("%d", printf("%d", 43)));//43 2 1 printf返回值是打印字符个数
//}

////函数声明
//int Add(int x, int y);
////函数调用
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum =Add(a, b);
//	printf("%d\n", sum);
//
//}
////函数定义
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

//简单递归
//int main() {
//
//
//	printf("hehe\n");
//	main();
//}


//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main() {
//
//	unsigned int num = 0;//无符号 全为正数
//	scanf("%d", &num);// 1234
//	//递归
//	print(num);
//	//printf(1234)
//	//printf(123)4
//	//printf(12)34
//	//printf(1)234
//	return 0;
//
//}


//模拟实现一个strlen函数
//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


//int my_strlen(char* str)
//{
//
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//
//}//递归
//int main() {
//
//
//
//	char arr[] = "bit";
//	int len =my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("%d\n", len);
//}

//求n的阶乘
//int Fac(int n)
//{
//
//	if (n <=1)
//	{
//		return 1;
//	}
//	else
//		return n*Fac(n-1);
//	}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = Fac(n);//循环方式
//	printf("%d\n", ret);
//}

//求斐波那契数列


//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//
//	}
//	else
//		return Fib(n - 1) + Fib(n - 2);
//
//}

//int Fib1(int n)
//{
//
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2)
//	{
//
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
// 
//int main() {
//	
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib1(n);
//	printf("%d ", ret);
//
//}

//汉诺塔问题
// 
void Hanoi(int n, char current, char transit, char target) {
    if (n == 1) {
        printf("%c-->%c\n", current, target);
    }
    else {
        Hanoi(n - 1, current, target, transit);
        printf("%c-->%c\n", current, target);
        Hanoi(n - 1, transit, current, target);
    }
}
int main() {
    int n;
    printf("请输入汉诺塔的层数：");
    scanf("%d", &n);
    Hanoi(n, 'A', 'B', 'C');
}

//青蛙跳台阶问题