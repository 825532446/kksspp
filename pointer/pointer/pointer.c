#include<stdio.h>
//
//int main() {
//
//
//	int b = 0;
//	int a = 10;
//	int* pa = &a;
//	int* p = NULL;
//
//}

int main()
{
	int m = 0;
	int i = 0;
	scanf("%d", &m);
	printf("����λ��");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >>i) & 1);
	}
	printf("ż��λ��");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}



}