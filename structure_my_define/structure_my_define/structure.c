#include<stdio.h>


//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//};
//struct Stu s3;
//int main() 
//{
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}

//struct
//{
//	int a;
//	char c;
//
//
//
//}sa;
//struct
//{
//	int a;
//	char c;
//
//
//
//}*psa;
//int main()
//{
//	psa = &sa;
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//
//}Node;
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}

//typedef struct
//{
//	int data;
//	struct Node* next;
//
//}Node;
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}

//struct T
//{
//	double weight;
//	short age;
//
//
//};
//
//struct S
//{
//	char c;
//	struct T ST;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct S s = { 'c',100,3.14,"hello bit" };
//	struct S s = { 'c',{55.6,30},100,3.14,"hello bit"};
//	
//
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.ST.weight);
//
//}


//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//	
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//
//};
//struct S4 
//{
//	char c;
//	struct S3 s3;
//	double d;
//
//};
// 
//int main()
//{
//	//struct S1 s1 = { 0 };
//	//printf("%d\n", sizeof(s1));
//	//struct S2 s2 = { 0 };
//	//printf("%d\n", sizeof(s2));
//	struct S4 s4;
//	printf("%d\n", sizeof(s4));
//	return 0;
//}

////设置默认对齐数为4
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//
//
//};
//#pragma pack()
////取消设置的默认对齐数，还原为默认
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//
//}


//#include<stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//
//};
//int main()
//{
//	printf("%d\n",offsetof(struct S,c ));//检测偏移量
//	printf("%d\n", offsetof(struct S,i));
//	printf("%d\n",offsetof(struct S,d ));
//
//
//
//}


//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S *ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
//Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//Print2( const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s;
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//	return 0;
//
//}