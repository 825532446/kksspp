#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	int len = strlen(arr);
//	printf("%d\n", len);
//}

//#include<assert.h>
//my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\n'
////	while(*src!='\n') {
////	*dest = *src;
////	dest++;
////	src++;
////}
////	*dest = *src;//������\0��
////	while (&src != '0')
////	{
////		*dest++ = *src++;
////	}
////}
//		while (*dest++ = *src++)
//	{
//			;
//	}
//		//����Ŀ�Ŀռ����ʼ��ַ
//		return ret;
//}
//
//int main()
//{
//	char arr1[] = {" abcdefghi"};
//	char arr2[] = { "bit" };
//	my_strcpy(arr1,arr2);//ǰ��Ŀ�ĵ� ����Դ����
//	printf("%s\n", arr1);
//	return 0;
//}
//#include<assert.h>
//char *my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest!=NULL);
//	assert(src!=NULL);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//
//}
//
//int main()
//{
//	char arr1[30] = { "hello" };
//	char arr2[] = { "world" };
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//int main()
//{
//	//vs������>1
//	//=0
//	//<-1
//
//	//linux-gcc
//	//> >0
//	//= =0
//	//< <0
//	char* p1 = "abcdef"; 
//	char* p2 = "sqwer";
//	int ret = strcmp(p1, p2);//�Ƚ��ַ���С
//
//	printf("%d\n", ret);
//		return 0;
//}

//int main()
//{
//	char* p1="abcdef";
//	char* p2="def";
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//
//}

//kmp�㷨
//#include<assert.h>
//char* my_strstr(const char* p1, const char* p2)
//
//{	
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		if ((*s1!='\0')&& (*s2!='\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//			if (*s2 == '\0')
//			{
//				return cur;
//			}
//			if (*s1 == '\0')
//			{
//				return NULL;
//			}
//			cur++;
//
//		}
//	}
//	return NULL;
//
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//
//
//
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//
//}

//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n",ret);
//	}
//
//}
//#include<errno.h>
//int main()
//{
//	//������ ������Ϣ
//	//0      -no error
//	//1      -Operation not permitted
//	//2      -No such file or directory
//	//errno��һ��ȫ�ֵĴ�����ı���
//	//��c���ԵĿ⺯����ִ�еĹ����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//���ļ�
//	FILE *pf=fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}
//#include<ctype.h>
//int main()
//{
//	//char ch = 'a';
//	//int ret = islower(ch);
//	//int ret = isdigit(ch);
//	//printf("%d\n", ret);
//	char ch = tolower('Q');
//	putchar(ch);
//
//
//
//}


//int main()
//{
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//
//}
//#include<assert.h>
//struct  S
//{
//	char name[20];
//	int age;
//};
//
//void* my_memmove(void*dest,const void *src,size_t count)//void*�����ָ��
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//if (dest<src || dest>(char*)src + count)
//	//{
//	//	//ǰ-��
//	//}
//	//else
//	//{
//	//	//��-ǰ
//	//}



	//if (dest < src)
	//{
	//	//ǰ-��
	//	while (count--)
	//	{
	//		*(char*)dest = *(char*)src;
	//		++(char*)dest;
	//		++(char*)src;
	//	}
	//}
	//else
	//{
	//	//��-ǰ
	//	while (count--)
	//	{

	//		*((char*)dest + count) = *((char*)src + count);
	//	}
	//}
	//return ret;
//}
//
//int main()
//{
//	int i;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memcpy(arr+2,arr,20);
//	my_memmove(arr , arr+2, 20);//�����ڴ��ص������
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[5] = { 0 };
// 	struct S arr3[] = { {"����",20},{"����",30} };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 8);
//	printf("%d\n", ret);
//}

//int main()
//{
//	char arr[10] = "";
//	memset(arr, '#', 10);
//	
//}











