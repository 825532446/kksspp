#include<stdio.h>
#include<string.h>

//ƽ���������Ŀ ���ַ���
// 
// Ŀ�꣺

//ÿ�ſεĳɼ���ΪA��B��C��D��F����ȼ���Ϊ�˼���ƽ�����㣬�涨A��B��C��D��F�ֱ����4�֡�3�֡�2�֡�1�֡�0�֡�
//
//���룺
//�ж������������
//
//ÿ����������ռһ�У���һ��������д��ĸ��ɣ���ĸ֮���ɿո�ָ���
//
//�����
//ÿ��������ռһ�С��������Ĵ�д��ĸ���ڼ��ϣ�A, B, C, D, F���У��������Ӧ��ƽ�����㣬���������λС�������������Unknown����
//
//����ʾ����
//
//A B C D F
//B F F C C A
//D C E F
//���ʾ����
//
//2.00
//1.83
//Unknown
// 
// 
//#include <stdio.h>
//
//#include <string.h>
//
//#define MAX_GRADES 100
//
//float calculate_grade_point_average(char* grades);
//
//int main() {
//	char grades[MAX_GRADES];
//	float score = 0.0;
//	// ��ȡһ���ַ���
//	fgets(grades, MAX_GRADES, stdin);
//	score = calculate_grade_point_average(grades);
//	if (score == -1.00) {
//		printf("Unknown");
//	}
//	else {
//		printf("%.2f\n", score);
//	}
//
//	return 0;
//}
//
//float calculate_grade_point_average(char* grades) {
//
//	float total_points = 0;
//	float count = 0;
//	// strtok���� �ֽ��ַ���Ϊһ���ַ���
//	char* token = strtok(grades, " ");
//
//	//printf("%d", sizeof(token));
//
//	while (token != NULL) {
//		if (token[0] == 'A' || token[0] == 'B' || token[0] == 'C' || token[0] == 'D' || token[0] == 'F') {
//			switch (token[0]) {
//			case 'A':
//				total_points += 4;
//				break;
//			case 'B':
//
//				total_points += 3;
//				break;
//			case 'C':
//				total_points += 2;
//				break;
//			case 'D':
//				total_points += 1;
//				break;
//			case 'F':
//				total_points += 0;
//				break;
//			}
//
//
//			count += 1;
//
//		}
//		else {
//			return -1;
//		}
//		token = strtok(NULL, " ");
//	}
//	if (count == 0) {
//		return -1;
//		return total_points / count;
//	}

 


	//int main()
	//{
	//	char arr[100];
	//	int i,sz;
	//	int n = 0;
	//	float sum = 0;
	//	while (gets(arr))
	//	{ 
	//		int flag = 0;
	//		sz = strlen(arr);
	//		for (i = 0; i < sz; i+=2)
	//		{
	//			switch (arr[i])
	//			{
	//			case 'A':
	//				sum += 4;
	//				n++;
	//				break;

	//			case 'B':
	//				sum += 3;
	//				n++;
	//				break;
	//			case 'C':
	//				sum += 2;
	//				n++;
	//				break;
	//			case 'D':
	//				sum += 1;
	//				n++;
	//				break;
	//			case 'F':
	//				sum += 0;
	//				n++;
	//				break;
	//			default:
	//				flag = 1;
	//			
	//			
	//			}
	//			

	//		}
	//		if (flag == 1)
	//		{
	//			printf("Unknown\n");
	//

	//		}
	//		else
	//		{
	//			printf("%.2lf\n", sum / n);
	//			
	//		}
	//		sum = 0;
	//		n = 0;
	//		flag = 1;
	//	}
	//}




//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char a[80];
//	int i, l, n;
//	double s;
//	while (gets(a))
//	{
//		l = strlen(a);
//		for (n = s = i = 0; i < l; i = i + 2)
//		{
//			if (a[i] == 'A')
//				s += 4;
//			else if (a[i] == 'B')
//				s += 3;
//			else if (a[i] == 'C')
//				s += 2;
//			else if (a[i] == 'D')
//				s += 1;
//			else if (a[i] != 'F')
//				n++;
//		}
//		printf(n ? "Unknown\n" : "%.2lf\n", s / ((l + 1) / 2));
//	}
//	return 0;
//}


//��ӡ����ͼ��


//int main()
//{
//	int a, b, c, q;
//	char ch = ' ';
//	while (scanf("%d", &a) != EOF)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			for (c = 0; c < a - b; c++)
//				printf("%c", ch);
//			for (c = 1; c <= b; c++)
//				printf("%d", c);
//			for (c = b - 1; c > 0; c--)
//				printf("%d", c);
//			printf("\n");
//		}
//		for (b = a - 1; b > 0; b--)
//		{
//			for (c = 0; c < a - b; c++)
//				printf("%c", ch);
//			for (c = 1; c <= b; c++)
//				printf("%d", c);
//			for (c = b - 1; c > 0; c--)
//				printf("%d", c);
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("�����Ķ�");
//	return 0;
//}

/*
����ĳ�������a��b�ĺ͡��û�����a��b��ֵ�������������������
���ڴ����������⣬�޷��ﵽԤ��Ч����
��ֱ������������н�����ĵط��޸���ȷ��
*/
//#include <stdio.h>
//int  main()
//{
//	int a, b;
//	int sum=0;
//
//	
//	scanf("%d%d", &a, &b);
//	sum = a + b;
//
//	printf("sum=%d\n", sum);
//	return 0;
//}

/*
����ĳ����ǵ�a��b��ֵ��ȵ�����������a��b��ȡ�����a��b��ֵ����ȵĻ��������
���ڴ����������⣬�޷��ﵽԤ��Ч����
��ֱ������������н�����ĵط��޸���ȷ��
*/
//#include <stdio.h>
//int  main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (a == b)
//	{
//		printf("a��b���\n");
//	}
//	
//	return 0;
//}

/*
�������������ǵ�a��b��ֵ��ȵ������a��b��ֵͬʱ����1����a��b��ֵ����ȵĻ������ߵ�ֵ���ֲ��䡣
���ڴ����������⣬�޷��ﵽԤ��Ч����
��ֱ������������н�����ĵط��޸���ȷ��
*/
//#include <stdio.h>
//int  main()
//{
//	int  a, b;
//	scanf("%d%d", &a, &b);
//	if (a == b)
//	{
//		a++;
//		b++;
//		printf("a=%d,b=%d", a, b);
//
//	}
//	else
//	{
//		printf("a=%d,b=%d", a, b);
//	}
//	return  0;
//}
// 
// 
//���Ԥ��
//#include<stdio.h>
//int main()
//{
//	int f, m;
//	double height = 0;
//	double originh = 0;
//	char temp, sex, diet, sports;
//	scanf("%d\n%d", &f, &m);
//	scanf("%c", &temp);
//	scanf("%c\n%c\n%c", &sex, &diet, &sports);
//	if (sex == 'M')
//	{
//		height = (f + m) * 0.54;
//		originh = height;
//		if (diet == 'Y')
//		{
//			height += originh * 0.02;
//		}
//
//		if (sports == 'Y')
//
//		{
//			height += originh * 0.015;
//		}
//	}
//	else
//	{
//		height = (f * 0.923 + m) / 2;
//		originh = height;
//		if (diet == 'Y')
//		{
//			height += originh * 0.02;
//		}
//
//		if (sports == 'Y')
//
//		{
//			height += originh * 0.015;
//		}
//
//	}
//	printf("%.2lf\n", height);
//	return 0;
//
//
//
//
//}

//������
//#include<stdio.h>
//int main()
//{
//	float a,b,c;
//	char x;
//	scanf("%f%c%f", &a, &x, &b);
//	switch (x)
//	{
//	case '+':c= a+ b; printf("%.2f", c); break;
//	case '-':c = a - b; printf("%.2f", c); break;
//	case '*':c = a * b; printf("%.2f", c); break;
//	case '/':
//		if (fabs(b) <= 1e-7)
//		{
//			printf("��������Ϊ0"); break;
//		}
//		else
//		{
//			c = a / b;
//			printf("%.2f", c); break;
//		}
//	default:
//		printf("���������"); break;
//	}
//	
//    return 0;
//
//
//}

//#include <stdio.h>
//int  main()
//{
//	int i = 1;
//	int sum = 0;
//
//	while (i <= 100)
//	{
//		sum += i;
//		i++;
//	}
//	printf("sum=%d\n", sum);
//	return  0;
//}



//#include<stdio.h>
//int  main()
//{
//	int i, j;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d", j);
//		}
//		printf("\n");
//		i++;
//	}

//#include<stdio.h>
//int  main()
//{
//	int i, j;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 2*i-1; j++)
//		{
//			printf("%d", j);
//		}
//		printf("\n");
//
//	}
//
//}

//#include<stdio.h>
//
//int main()
//{
//	int grade = 0, size = 0, count = 0, average, num;
//	while (scanf("%d", &num) == 1)
//	{
//		if (num >= 0) {
//			grade += num;
//			size++;
//			if (num < 60) {
//				count++;
//			}
//		}
//		else {
//			break;
//		}
//
//		average = grade / size;
//
//	}
//	printf("%d %d\n", average, count);
//	return 0;
//}



//
//#include <stdio.h>
//int main() {
//	int n = 0, count = 0,grade=0, sum = 0;
//	scanf("%d", &grade);
//	while (grade >= 0) {
//		if (grade < 60)
//			count++;
//		sum += grade;
//		scanf("%d", &grade);
//		n++;
//	}
//	if (n > 0) {
//		printf("%d", sum / n);
//		printf(" %d", count);
//	}
//
//	return 0;
//}

//9*9�˷���
//#include<stdio.h>
//int main()
//{
//	int i, j,s;
//	for (i = 1; i <= 9; i++)
//	{
//
//		for (j = 1; j <= i; j++)
//		{
//			s = j * i;
//			printf("%dX%d=%d ", j, i,s);//%-2d��ʾ����Ϊ������룬%2d�Ҷ���
//
//		}
//		printf("\n");
//	}
//}

//�ߵ�λ����
//int main()
//{
//	unsigned int n, n1, n2;
//	scanf("%u", &n);
//	n1 = n;
//	n2 = n;
//	n1 <<= 16;
//	n2 >>= 16;
//	printf("%u", n1 + n2);
//	return 0;
//
//}


//#include <stdio.h>
//
//// �����ⶨ����� x �� y
//
//int x;
//
//int y;
//
//int addtwonum()
//
//{
//
//	// �������������� x �� y Ϊ�ⲿ����
//
//	extern int x;
//
//	extern int y;
//
//	// ���ⲿ������ȫ�ֱ�����x �� y ��ֵ
//
//	x = 1;
//
//	y = 2;
//
//	return x + y;
//
//}
//
//int main()
//
//{
//
//	int result;
//
//	// ���ú��� addtwonum
//
//	result = addtwonum();
//
//	printf("result Ϊ: %d", result);
//
//	return 0;
//
//}

//ͳ�ƴ�д��Сд�����֣���������Ŀ
//int main()
//{
//	char a;
//	int i = 1;
//	int num=0, small=0,big=0, other=0;
//	while (1)
//	{
//		scanf("%c", &a);
//		if (a >= '0' && a <= '9')
//			num++;
//		else if (a >= 'a' && a <= 'z')
//			small++;
//		else if (a >= 'A' && a <= 'Z')
//			big++;
//		else
//			other++;
//		if (a == 'q' || a == 'Q')
//			break;
//	}
//	printf("%d %d %d %d", num, small, big, other);
//
//}

//ˮ�ɻ���
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0,sum=0,i=0;
//
//	scanf("%d",&n);
//	for (i = 100; i <= n; i++)
//	{
//		sum = pow(i % 10, 3) + pow((i / 10) % 10, 3) + pow(i / 100, 3);
//		if (sum== i)
//		{
//			printf("%d ", i);
//		}
//	}
//}

//#include <stdio.h>
//int  main()
//{
//	int i = 1;
//	int sum = 0;
//
//	while (i <= 100)
//	{
//		sum += i;
//		i++;
//	}
//	printf("sum=%d\n", sum);
//	return  0;
//}

//#include<stdio.h>
//int  main()
//{
//	int i, j;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("%d", j);
//		}
//		printf("\n");
//	}
//}

//����
//int main()
//{
//	int i,s=0;
//	char arr[100];
//	gets(arr);
//	int sz = strlen(arr);
//	for (i = 0; i <sz/2; i++)
//	{
//		if (arr[i] ==arr[sz - i-1])
//
//		{
//			if(i==sz/2-1)
//			printf("�ǻ����ַ���");
//		}
//		else
//		{
//			printf("���ǻ����ַ���");
//			break;
//		}
//		
//	}
//	
//
//}

//������
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", n);
//
//
//	printf("Number %d is not a palindrom", n);
//}

//�Ĵ�
//#include <stdio.h>
//int  main()
//{
//	int a[5] = { 5,4,3,2,1 };
//	int i,sum=0;
//	for (i = 0; i <= 4; i++)
//	{
//		sum = sum + a[i];
//	}
//	printf("sum=%d\n", sum);
//	return  0;
//}

//�����ֵ����Сֵ��ƽ��ֵ
//#include<stdio.h>
//int main()
//{
//	int i,tmp,n;
//	int arr[100];
//	float sum = 0.00;
//	float ave = 0.00;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//		ave = sum / n;
//	}
//
//
//	for (i = 0; i < n-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j+ 1];
//				arr[j + 1] = tmp;
//
//			}
//		}
//	}
//	printf(("%d %d %.2f"), arr[n-1], arr[0],ave);
//}

//int main()
//{
//	char a = '*';
//	char str[200];
//	// �������
//	int arr[100], num, i = 0, j;
//	int one = 0, two = 0, three = 0, four = 0, five = 0,
//		six = 0, seven = 0, eight = 0, nine = 0,
//		ten = 0;
//
//	// 1.��ȡ�ַ���
//	gets(str);
//	// 2.�ո�ָ�
//	char* str1 = strtok(str, " ");
//	while (str1 != NULL)
//	{
//		// 3.�ַ���ת����
//		num = atoi(str1);
//		//printf("%d \n", num);
//
//		// 
//		str1 = strtok(NULL, " ");
//		// 4.���ݴ洢������
//		arr[i] = num;
//		switch (arr[i])
//		{
//		case 1:
//			/*printf("=== %d\n", one);*/
//			one++;
//			break;
//		case 2:
//			two++;
//			break;
//		case 3:
//			three++;
//			break;
//		case 4:
//			four++;
//			break;
//		case 5:five++; break;
//		case 6:six++; break;
//		case 7:seven++; break;
//		case 8:eight++; break;
//		case 9:nine++; break;
//		case 10:ten++; break;
//		}
//		i++;
//	}
//
//	int arr1[10] = { one,two,three,four,five,six,seven,eight,nine,ten };
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\t%d\t", i + 1, arr1[i]);
//		// ����ǺŲ�����
//		for (j = 0; j < arr1[i]; j++) {
//			printf("%c", a);
//		}
//		// ����
//		printf("\n");
//	}
//
//}

//#include <stdio.h>
//int main()
//{
//	int n = 100, i=0, j;
//	int score[100];
//	int count[100] ;
//	while (scanf("%d", &score[i]) != EOF)
//	{
//		int sz = sizeof(score) / sizeof(score[0]);
//		for (i = 0; i < sz; i++)
//		{
//			scanf("%d", &score[i]);
//			count[score[i]]++;
//		}
//		for (i = 1; i <= 10; i++)
//		{
//			if (i <= 10 && i > 0)
//			{
//				printf("%d\t", i);
//				printf("%d\t", count[i]);
//				for (j = 0; j < count[i]; j++)
//				{
//					printf("*");
//				}
//				printf("\n");
//
//			}
//		}
//	}
//}

//������ת
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", n / 100 + ((n / 10) % 10) * 10 + (n % 10) * 100);
//}

//�ж�����
//#include<stdio.h>
//int main()
//{
//	int i, s = 0;
//	float n;
//	for (i = 1; i <= 6; i++)
//	{
//		scanf("%f", &n);
//		if (n > 0)
//		{
//			s++;
//		}
//
//	}
//	printf("%d positive numbers", s);
//
//
//
//}

//쳲���������
//#include<stdio.h>
//int count = 0;
//int Fib(int n,int i)
//{
//	
//	for (i = 1; i <= n; i++)
//	{
//		if (i == 3)
//		{
//			count++;
//		}
//		if (i <= 2)
//		{
//			return 1;
//
//		}
//		else
//			return Fib(i - 1) + Fib(i - 2);
//	}
//
//}
//
//
//int main() {
//	int i=1;
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n,i);
//	printf("%d ", ret);
//
//
//}

//#include <stdio.h>
//
//int fibonacci(int n) {
//	if (n <= 2) {
//		return 1;
//	}
//	else {
//		return fibonacci(n - 1) + fibonacci(n - 2);
//	}
//}
//
//int main() {
//	int n, i;
//
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		printf("%d ", fibonacci(i));
//	}
//
//	return 0;
//}

//����
//#include<stdio.h>
//int main()
//{
//	int  number,time;
//	float salary_per_hour,sum;
//	scanf("%d%d%f", &number, &time, &salary_per_hour);
//	sum = time * salary_per_hour;
//	printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, sum);
//
//
//}

//����
//#include<stdio.h>
//int main()
//{
//	int i,n,tmp;
//	int arr[100];
//	int j = 0;
//	while (scanf("%d", &n) == 1)
//	{
//
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (i = 0; i < n - 1; i++)
//		{
//
//			for (j = 0; j < n - i - 1; j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					tmp = arr[j + 1];
//					arr[j + 1] = arr[j];
//					arr[j] = tmp;
//				}
//
//			}
//		}
//	}
//		for (i = 0; i < n; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//	
//}


////�����������
// #include<stdio.h>
//int main()
//{
//
//	int A, N, i;
//	int sum = 0;
//	scanf("%d%d", &A, &N);
//	if (N > 0)
//	{
//
//		for (i = A; i < A + N; i++)
//		{
//			sum += i;
//		}
//		printf("%d", sum);
//	}
//	else
//	{
//		while (N <= 0)
//		{
//			scanf("%d",&N);
//		}
//		for (i = A; i < A + N; i++)
//		{
//			sum += i;
//		}
//		printf("%d", sum);
//	}
//}

////�۰���ҷ�
//int main()
//{
//	int arr[]={ -1,15,66,99,122,189 };
//	int n;
//	scanf("%d", &n);
//	int sz = sizeof(arr) /sizeof( arr[0]);
//	int left = 0;
//	int right = sz-1 ;
//	int count = 0;
//	while (left <= right)
//	{
//		count++;
//		int mid = (left + right) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid -1;
//		}
//		else if (arr[mid] <n)
//		{
//			left = mid +1;
//		}
//		else
//		{
//			
//			break;
//		}
//	}
//	if (left > right)
//	{
//
//		printf("%d\n", 0);
//	}
//	printf("%d\n", count);
//	return 0;
//}

//ˢ��ѵ��
//#include<stdio.h>
//int main()
//{
//	int n, a, b, i, x = 0;
//	scanf("%d%d%d", &n, &a, &b);
//	for (i = 1; i <=n; i++)
//	{
//		x = a +( i-1) * b;
//		printf("%d ", x);
//		x = 0;
//	}
//}


//�������
//#include<stdio.h>
//int main()
//{
//
//	int i,n=0,k;
//	float s = 0.0;
//	scanf("%d", &k);
//	while(s<=k)
//	{
//		n++;
//		s+= 1 /( 1.0*n);
//		
//	}
//	printf("%d", n);
//}


////noip2002������
//#include <stdio.h>
//int main()
//{
//	int k, n = 1;
//	scanf("%d", &k);
//	double sum=0.0;
//	while (sum <= k)
//	{
//		sum +=1.0 / n;
//		n++;
//	}
//	printf("%d", n - 1);
//	return 0;
//}


//����Ǯ

//int main()
//{
//
//	int n;
//	scanf("%d", &n);
//
//
//}

//˳�����
// #include<stdio.h>
//int main()
//{
//	int n,i=0;
//	int arr[6] = { 99,23,5,189,-1,66 };
//	scanf("%d", &n);
//	int flag = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i<=sz-1)
//	{
//		i++;
//		
//		if (n == arr[i])
//		{
//			printf("%d", i);
//			flag = 1;
//		}
//
//		
//
//
//	}
//	if (flag == 0)
//	{
//		printf("%d", -1);
//	}
//}

#include<stdio.h>

int main()
{
	int n, i = 0;
	int arr[] = { 99,23,5,189,-1,66 };
	scanf("%d", &n);
	int sz = sizeof(arr) / sizeof(arr[0]);
	while (arr[i] != n && i < sz - 1)
	{

		i++;


	}
	if (arr[i] != n)
	{
		printf("%d", -1);
	}

	else
	{
		printf("%d", i);
	}


}
