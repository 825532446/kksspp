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
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��?(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//
//
//}

//int main() {
//	int line = 0;
//	printf("�������\n");
//	while (line<20000)
//	{
//		line++;
//		printf("��һ�д���: %d\n",line);
//		
//	}
//	if(line>=20000)
//	printf("��offer\n");
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
//	sum = Add(num1, num2);//Add�Զ��庯��
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
//	int a = 2;//<<����>>���� ����1ռ4���ֽ�-32bitλ 00000000000000000000000001��߶����ұ߲�0
//
//	int b = a >>1;
//
//	printf("%d\n", b);
//
//
//}
//int main() {//�����Ʋ���
//	int a = 3;//011
//	int b = 5;//101
//	int c = a^ b;//&��λ�룺ȫ1��1 |��λ�� ^a����1��1 ��λ���:��Ӧ�Ķ�����λ��ͬ1����ͬ0
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
	//int a = 10;
	//printf("%d\n", a);//c���Ա�ʾ��٣�0�٣������Ϊ��
	//printf("%d\n", !a);//!���߼������� ��ļ� �ٸ���
	//return 0;
	//int a = +3;//����ʡ��
//	int sz = 0;
//	int a = 10;
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sizeof(a));//�������/������ռ�ռ��С����λ�ֽ� 
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof sz);//������ʡ�����ţ����Ͳ���
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
//	int a = 0; //�ĸ��ֽ�32��bit
//
//		int b = ~a;//b���з��ŵ�����
//		//���������ƣ�λȡ��0101-1010
//		printf("%d\n", b);//000000000000000000000000000000000000000
//						  //111111111111111111111111111111111111111
//						  //111111111111111111111111111111111111110
//						  //100000000000000000000000000000000000001 ԭ����λΪ����λ1����0����
//							//ֻҪ�������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//
//							//ԭ�룬���룬����   ԭ��ȡ��-����+1-����
//						//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//						//��ӡ�����������ԭ��
//	return 0;
//}

//int main() {
//
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	//int b = ++a;//ǰ��++����++,��ʹ��
//	int b = --a;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//
//}

//int main() {
//
//	int a = (int)3.14;//ǿ������ת��double-->int
//	return 0;
//}

//int main() {
//
//	int a = 3;
//	int b = 5;
//	int c = a && b;//&&�߼��� ||�߼���
//	printf("c=%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//������aִ�У�������bִ��//��Ŀ������/����������
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
//		arr[4];//[]�±����ò�����
//
//}

//�������ò�����
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
		//auto int a = 0;//�ֲ�����-�Զ�����
//enumö�� extern�����ⲿ���� struct�ṹ��ؼ��� union�����塢������ void�޿�
//register int a=10;//�����a����ɼĴ�������
//int����ķ������з��ŵ�int ��sgined int�ȼ�
//unsign int�޷���
//typedef ���Ͷ���-�����ض���
//typedef unsigned int u_int;
//u_int num2 = 20;


////staticʹ�ֲ������������ڱ䳤,static����ȫ�ֱ������ı��˱�����������-��
// ��̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
// ����Դ�ļ��Ͳ���ʹ����
// static���κ���,Ҳ�Ǹı��˺�������������
// �ⲿ��������-->�ڲ���������
//void test() {
//	 static int a = 1;//a��һ����̬�ľֲ���������һ�γ�ʼ����֮������
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

//define��Ķ���
//#define MAX(x,y) (x>y?x:y)
//int main() {
//
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max=%d\n", max);
//}
  

//һ��ָ�� 4���ֽڣ�32λ��8���ֽڣ�64λ��
//int main() {
//
//	int a = 10;
//	int* p = &a;//ȡ��ַ p��ָ�����
//	printf("%p\n", p);
//	*p = 20;//*-�����ò����� 
//	printf("a=%d\n", sizeof(p));
//}
//��һ�ֱ�����������ŵ�ַ-ָ�����
//int main() {
//
//	int a = 10;
//	printf("%p\n", &a);
//
//}


//�ṹ��-�����Լ������һ������
//struct Book
//{
//
//	char name[20];
//	short price;
//
//};
//int main() {
//	struct Book b1 = { "c���Գ������",55 };
//	strcpy(b1.name, "C++");//strcpy-string copy -�ַ�������-�⺯��-string.h
//	struct Book* pb = &b1;
//	//printf("%s\n", b1.name);
//	//printf("%d\n", b1.price);
//	//b1.price = 15;
//	//printf("%d\n", b1.price);
//	//printf("%s\n", (*pb).name);
//	//printf("%d\n", (*pb).price);
//	printf("%s\n", pb->name);//nameΪ����������һ����ַ
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
//		{printf("δ����\n");
//      printf("����18��")��//�������Ӵ�����
// }
//	else if (age < 28 && age >= 18)
//		printf("����\n");
//	else
//		printf("����\n");
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

	unsigned int num = 0;//�޷��� ȫΪ����
	scanf_s("%d", &num);// 1234
	//�ݹ�
	print(num);
	//printf(1234)
	//printf(123)4
	//printf(12)34
	//printf(1)234
	return 0;

}