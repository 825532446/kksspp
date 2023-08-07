#include<stdio.h>



//描述一个学生
//名字
//年龄
//性别

//struct 结构体关键字   Stu 结构体标签  struct Stu 结构体类型
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//
//
//}Stu;
//
//int main() {
//	struct Stu s1 = { "张三",20,"12451564124","男" };
//	Stu s2 = {"旺财",30,"21412141411","女"};
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//
//
//
//};
//
//struct T
//{
//
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//
//int main() {
//	char arr[] = "Hello bit\n";
//	struct T t = { "hehe",{100,"w","Hello world",3.14},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//
//	}


typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];



}Stu;

 void Print1(Stu tmp)
{
	 printf("name: %s\n", tmp.name);
	 printf("age: %d\n", tmp.age);
	 printf("tele: %s\n", tmp.tele);
	 printf("sex: %s\n", tmp.sex);
}
 void Print1(Stu *ps)
 {
	 printf("name: %s\n", ps->name);
	 printf("age: %d\n", ps->age);
	 printf("tele: %s\n", ps->tele);
	 printf("sex: %s\n", ps->sex);
 }

int main() {

	Stu s = { "李四",40,"13442333444","男" };
	Print1(s);
	Print2(&s);

	return 0;
}