#include<stdio.h>
#include<string.h>
#include<math.h>
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}


//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
// 
//	char cha[2];
//	short s8a[4];
//}*p;
//
////����p��ֵΪ0x100000�����±��ʽ��ֵ�ֱ��Ƕ���
////��֪���ṹ��test���͵ı����Ĵ�СΪ20���ֽ�
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n",(unsigned int) p + 0x1);
//
//}

//%x16������
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//}


//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp+3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//}

//�����ַ�������
//#include<assert.h>
//void reverse(char*str) {
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left<right)
//	{
//
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	gets(arr);//��ȡһ��
//	reverse(arr);
//	printf("�������ַ�����%s\n", arr);
//	return 0;
//
//
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//
//	//2 22 222 2222 22222
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum +=ret ;
//
//	}
//	printf("%d\n", sum);
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		//����i��λ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /=10)
//		{
//			n++;
//		}
//		//����i��ÿһλ��n�η�֮��
//		tmp = i;
//		while (tmp)
//		{
//			
//			sum+=pow(tmp % 10, n);
//			tmp /= 10;
//
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//		
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j <2*(line-1-i)-1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//
//
// }

////������ⷨ
//#include<assert.h>
//void left_move(char *arr,int k)
//{
//	int i = 0;
//	assert(arr);
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j <len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//
//		}
//		*(arr + len - 1) = tmp;
//
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n",arr);
//		return 0;
//}
//
////������ת��
////abcdef
////ba fedc
////cdefab
//#include<assert.h>
////�����ַ�������
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//void left_move(char *arr,int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k < len);
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr + k,arr+len-1 );//�����ұ�
//	reverse(arr,arr+len-1);//��������
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}

//#include<assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//void left_move(char *arr,int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <=len);
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr + k,arr+len-1 );//�����ұ�
//	reverse(arr,arr+len-1);//��������
//
//}
//
//int is_left_move(char*s1,char *s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
// {
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//}

//#include<assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr + k, arr + len - 1);//�����ұ�
//	reverse(arr, arr + len - 1);//��������
//
//}
//
//int is_left_move(char* str1, char* str2)
//{
//	int len1= strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//1.��str1�ַ�����׷��һ��ָ����ַ������Ӵ�
//	// strcat �ַ���׷��
//	//strcat(str1, str2);//err
//	strncat(str1, str2, 6);
//	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	//���Ӵ�strstr
//	char *ret=strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//
//
//	return 0;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdef";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//}

//���Ͼ���
int FindNum(int arr[3][3],int k,int *px,int *py)
{
	int x = 0;
	int y = *py - 1;
	while (x<=*py-1&&y>=0)
	{

	
	if (arr[x][y] > k)
	{
		y--;
	}
	else if(arr[x][y] <k)
	{
		x++;
	}
	else
	{
		*px = x;
		*py = y;
		
		return 1;
	}
	}
	*px = -1;
	*py = -1;
	return 0;
}

int main()
{
	int x = 3;
	int y = 3;
	int arr[3][3] = { {1,2,3},{4,5,6 },{7,8,9 }};
	int k = 4;
	//�����Ͳ���
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("�ҵ���\n");
		printf("�±���%d %d\n", x, y);
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}


