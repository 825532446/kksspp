#include<stdio.h>

//int main()
//{
//         //写一段代码告诉我当前机器的字节序是什么
//    int a = 1;
//    char* p = (char*) & a;
//    if (*p = 1)
//    {
//
//        printf("小端\n");
//    }
//    else
//    {
//        printf("大端\n");
//
//    }
//    return 0;
//}



//int check_sky()
//{
//	int a = 1;
//	return *(char*)&a;
//
//	//返回1，小端，返回2，大端
//
//}
//int main() {
//
//
//	//写一段代码告诉我当前机器的字节序是什么
//	//返回1，小端
//	//返回0，大端口
//	int ret=check_sky( );
//	if (ret ==1)
//	{
//		printf("小端\n");
//
//	}
//	if (ret ==0)
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//int main() {
//
//	unsigned char i = 0;
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//
//}

//int main()
//{
//
//	double d = 1E10;
//	printf("%lf\n", d);
//}

int main()
{
	float f = 5.5;//101.1  (-1)^0*1.011*2^2
	//E=2+(127)
	//0100 0000 1011 0000 0000 0000 0000 0000
	//0x40b00000
	return 0;
}