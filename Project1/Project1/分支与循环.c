#include<stdio.h>
#include<string.h>
#include <windows.h> 
#include<stdlib.h>
#include<time.h>



//int main() {
//
//
//	int age =29;
//	if (age < 18)
//		{printf("δ����\n");
//      printf("����18��")��//�������Ӵ�����
// }
//	else if (age < 28 && age >= 18)
//		printf("����\n");
//	else
//		printf("����\n");
//}
//int main() {
//
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//
//		else
//			printf("haha\n");//else�������ifƥ��
//
//}

//int main() {
//	int num = 4;
//	if (5 == num)//������ǰ��ȽϺ�,��֪���ﷸ��
//	{
//
//		printf("hehe\n");
//	}
//}

//int main() {
//	int a =0;
//	scanf("%d", &a);//ע��ȡ��ַ&
//	if (a % 2 != 0)
//		printf("���� %d\n",a);
//	else
//		printf("ż�� %d\n",a);
//}

//int main()
//{
//	int i = 1;
//		while (i <= 100)
//		{
//			if (i % 2 == 1)
//				printf("%d\n", i);
//			i++;//����i+=2;
//		}
//
//}

//switch��������
//int main() {
//
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1://case���������
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//
//
//			
//
//	}
//}

//int main() {
//	int n = 1;
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		if (n == 1)
//			printf("hehe\n");
//	case 2:
//	case 3:
//	case 4:	
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������");
//
//
//	}
//}

//int main() {
//
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//      break;//ֱ����ֹ
//	}
//}

//int main() {
//
//
//int i = 1;
//while (i <= 10)
//{
//	i++;
//	if (i == 5)
//		continue;//��ֹ���沿��
//		printf("%d", i);
//	
//}
//}

//int main() {
//
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);
//}

//int main() {
//
//	int ch = 0;
//	//ctrl +z����
//	//EOF-edd of file->-1
//	while ((ch = getchar())!= EOF)
//	{
//		putchar(ch);
//	}
//	printf("%c\n", ch);
//}

//int main() {
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	//��������ʣ��һ��'\n'
//	//��ȡһ��'\n''
//	//getchar();
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//		printf("����ȷ��\n");
//
//
//
//
//}

//int main() {
//
//	int ch = 0;
//	while ((ch = getchar())!= EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//}

//int main() {
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;//����ѭ��
//		printf("%d ", i);
//	}
//
//}


//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0;i < 10; i++)//ǰ�պ�
//	{
//		printf("%d", arr[i]);
//	}
//
//}

//forѭ������

//int main() {
//
//	for (;;)
//	{
//		printf("haha\n");//�ж�ʡ�Ժ�Ϊ�棬���Ƿǳ����������������ʡ��
//		
//	}
//}

//int main() {
//	int i = 1;
//	do
//	{
//		printf("%d", i);
//		i++;
//	}
//	while(i <= 10);
//}

/// <summary>
/// do Whileѭ��ʾ��
/// </summary>
void a1() {
	int i = 1;
	do
	{
		printf("%d", i);
		i++;
	} while (i <= 10);
}

void a2() {
	int n = 0;
	int i = 0;
	int a = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		a *= i;
	}

	printf("%d\n", a);
}

void a3() {

	int n = 0;
	int i = 0;
	int a = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		a = 1;
		for (i = 1; i <= n; i++)
		{
			a *= i;
		}
		sum += a;
	}

	printf("%d\n", sum);
}
void a4() {

	int n = 0;
	int i = 0;
	int a = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		a = a * n;
		sum += a;
	}

	printf("%d\n", sum);
}

void a5() {

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//дһ�����룬��arr����(�����)���ҵ�7
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
			break;

		}

	}
	if (k == sz)
		printf("�Ҳ���\n");


}

//���ַ�
void a6() {

	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int mid = 0;
	int k = 5;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int count = 0;
	while (left <= right)
	{
		count++;
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			right = mid - 1;
		}
		else if (arr[mid] > k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}


	}
	if (left > right)
	{

		printf("�Ҳ���\n");
	}
	printf("%d", count);
	return 0;
}



//wecome to but!!!!!!
//###################
//w#################!
//we###############!!
//wel#############!!!
//...
//wecome to but!!!!!!
void a7() {
	char arr1[] = "wecome to bit!!!!!!";
	char arr2[] = "###################";
	int left = 0;
	int right = strlen(arr1) - 1;//����������\0
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//char arr[]="abc"
	//										//[a b c \0]
	//										//0 1 2 3
	while (left <= right) {
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//��Ϣһ��
		Sleep(1000);//����
		system("cls");
		left++;
		right--;

	}
	printf("%s\n", arr2);

	return 0;
}

void a8() {


	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������\n");
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0)//==���������Ƚ��ַ����Ƿ����
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("����������������˳�����\n");
	}
}

void a9() {
	int a, b, c = 0;

	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;

	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;

	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;

	}
	printf("%d %d %d", a, b, c);


}

void three()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d\n", i);
	}

}

void yueshu()
{
	int i, a, b, c = 0;
	scanf("%d%d", &a, &b);

	if (a > b)
		c = b;
	else
		c = a;

	for (; c >= 1; c--)
	{
		if (a % c == 0 && b % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}

}//շת�����
void Euclideanalgorithm() {
	int m = 24;
	int n = 18;
	int r = 0;
	scanf("%d%d", &m, &n);
	while (r = m % n)
	{
		m = n;
		n = r;
	}
	printf("%d\n", n);
}

void runnian() {
	int count = 0;
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d\n", year);
			count++;
		}
		else if(year%400==0)
		{
			printf("%d\n", year);
			count++;
		}
		
	}
	printf("%d\n", count);
}

void prime_number() {
	int a,i,j,b,count= 0;
	for (i = 100; i <= 200; i++)
	{
		b = 1;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				b = 0;
				break;
			}
		}
		if (b)
		{
			count++;
			printf("%d\n", i);
		}
	}
	printf("%d\n", count);

}


void nine() {

	int i, s = 0;
	for (i = 1; i <= 100;i++  )
	{
		if (i % 10 == 9)
		{
			s++;
			printf("if %d\n", i);
		}

		 if (i / 10 == 9)
		{
			s++;
			printf("else if %d\n", i);
		}

	}
	printf("%d\n", s);
}

void fraction_add_minus() {

	int i = 0;
	float sum = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			sum = sum - 1.0 / i;
		}
		else
			sum = sum + 1.0 / i;

	}
	printf("%f\n", sum);
}

void max_10() {
	int i=0;
	int arr[] = { -1,-2,-3,-4,-5,-6,-10,-8,-9,-7 };
	int max = arr[0];
	int size = sizeof(arr) / sizeof(arr[0]);
	for (; i < size; i++)
	{

		if (max<arr[i])
		{
			max = arr[i];
			
		}
		
	}
	printf("%d\n", max);
}

void nine_and_nine() {
	int j = 0,i = 0;
	for (i = 1; i <= 9; i++)
	{
		
		for (j = 1; j <= i; j++)
		{
			printf("%dx%d=%d\t", i, j, i * j);
		}
		printf("\n");
	}


}



void Bisection_Method()
{

	int k = 11;
	int mid = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz-1;
	//��
	while (left <=right)
	{

		int mid = (left + right) / 2;
		//��������С�ڽ���
		if (arr[mid] > k)
		{
			right = mid - 1;
			printf("right%d\n", right);

		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
				printf("left%d\n", left);
		}
		else
		{
			printf("%d\n", mid);
			break;
		}
	}
	//?
	if (left > right)
	{
		printf("�Ҳ���");
	}

}

//��������Ϸ
void menu()
{
	printf("******************************\n");
	printf("****   1.play   0.exit   *****\n");
	printf("******************************\n");
}

//RAND_MAX 0-32767
void game()
{
	int ret = 0;
	ret = rand()%100+1;//����1-100�����
	/*	printf("%d\n", ret);*/
	//2.������
	while (1) {

		int guess = 0;
		printf("�²�����:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");

		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}

}
void guess_number()
{
	int input = 0;
	srand((unsigned int)time(NULL));//NULL��ָ��
	//time_t time(timr_t *timer)
	//ʱ����������������������㣩=�������ʼʱ��-���������ʱ��
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;

		}
	} while (input);

}
			
//goto��䣨������ʹ�ã�
void goto_sentence() {

again:
	printf("hello bit\n");//���ҽṹ���жϣ��������
	goto again;

}
}

void shutdown_1() {
	//shutdown-s-t 60(cmd��)
	//shutdown-a(ȡ���ػ���
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����һ�������ڹػ���������룺��������ȡ���ػ�\n������:");
	scanf("%s", input);//���鲻��Ҫ���ַ
	if (strcmp(input, "������")==0)//�Ƚ������ַ���
	{
		system("shutdown -a");
	}
	else 
	{
		goto again;
	}
	return 0;
}
			
//int main() {
//	/*a6();*/
//	/*Bisection_Method();*/
//	/*guess_number();*/
//	/*shutdown_1();*/
//
//
//
//}
