#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<string.h>
//int main() {

//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//
//	}
//
//		return 0;
//}



//int main()
//	
//{
//	{
//		int tmp = 0;
//		printf("tmp=%d\n", tmp);
//
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//
//	return 0;
//
//}

//void test2() {
//
//	printf("hehe\n");
//}
//
//void test1() {
//
//	test2();
//}
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main() {
//
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//	
//
//
//
//}

//int main() {
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//
//
//

	
	//for (i = 1; i <=12; i++)
	//{
	//	printf("hehe\n");
	//	arr[i] = 0;
	//}
	//system("pause");
	//return 0;
//}
//
//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//\0
//
//
//}


//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//
//		;
//	}
//
//}
//int main() {
//
//
//	char arr1[] = "########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//
//
//		while (*dest++ = *src++)
//		{
//
//			;
//		}
//	}
//
//
//
//}

//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);
//
//		while (*dest++ = *src++)
//		{
//
//			;
//		}
//
//
//
//}
//
//int main() {
//
//
//	char arr1[] = "########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//}

//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);
////把src指向的字符串拷贝到dest，包含'\0'字符
//	while (*dest++ = *src++)
//	{
//
//		;
//	}
//
//	return ret;
//
//}
//
//int main() {
//
//
//	char arr1[] = "########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", my_strcpy(arr1, arr2));
//}

#include<assert.h>
my_strlen(const char *str) {

	int count = 0; 
	assert(str != NULL);//保证指针有效性
	while (str!='\0')
	{

		count++;
		str++;
	}

}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n");
	return 0;
}