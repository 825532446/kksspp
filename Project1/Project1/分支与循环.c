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
//		{printf("未成年\n");
//      printf("不满18岁")；//多条语句加大括号
// }
//	else if (age < 28 && age >= 18)
//		printf("青年\n");
//	else
//		printf("成年\n");
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
//			printf("haha\n");//else与最近的if匹配
//
//}

//int main() {
//	int num = 4;
//	if (5 == num)//常量放前面比较好,易知那里犯错
//	{
//
//		printf("hehe\n");
//	}
//}

//int main() {
//	int a =0;
//	scanf("%d", &a);//注意取地址&
//	if (a % 2 != 0)
//		printf("奇数 %d\n",a);
//	else
//		printf("偶数 %d\n",a);
//}

//int main()
//{
//	int i = 1;
//		while (i <= 100)
//		{
//			if (i % 2 == 1)
//				printf("%d\n", i);
//			i++;//或者i+=2;
//		}
//
//}

//switch必须整形
//int main() {
//
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1://case后必须整形
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误");
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
//      break;//直接终止
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
//		continue;//终止后面部分
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
//	//ctrl +z结束
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
//	printf("请输入密码:>");
//	scanf("%s", password);
//	//缓冲区还剩下一个'\n'
//	//读取一下'\n''
//	//getchar();
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//		printf("放弃确认\n");
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
//			break;//跳出循环
//		printf("%d ", i);
//	}
//
//}


//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0;i < 10; i++)//前闭后开
//	{
//		printf("%d", arr[i]);
//	}
//
//}

//for循环变种

//int main() {
//
//	for (;;)
//	{
//		printf("haha\n");//判断省略恒为真，不是非常熟练，不建议随便省略
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
/// do While循环示例
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
	//写一个代码，在arr数组(有序的)中找到7
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了，下标是：%d\n", i);
			break;

		}

	}
	if (k == sz)
		printf("找不到\n");


}

//二分法
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
			printf("找到了，下标是：%d\n", mid);
			break;
		}


	}
	if (left > right)
	{

		printf("找不到\n");
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
	int right = strlen(arr1) - 1;//个数不包含\0
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//char arr[]="abc"
	//										//[a b c \0]
	//										//0 1 2 3
	while (left <= right) {
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//休息一秒
		Sleep(1000);//毫秒
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
		printf("请输入密码\n");
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0)//==不能用来比较字符串是否相等
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("输入错误\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码均错误，请退出程序\n");
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

}//辗转相除法
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
	//？
	while (left <=right)
	{

		int mid = (left + right) / 2;
		//大于升序，小于降序
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
		printf("找不到");
	}

}

//猜数字游戏
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
	ret = rand()%100+1;//生成1-100随机数
	/*	printf("%d\n", ret);*/
	//2.猜数字
	while (1) {

		int guess = 0;
		printf("猜猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");

		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}

}
void guess_number()
{
	int input = 0;
	srand((unsigned int)time(NULL));//NULL空指针
	//time_t time(timr_t *timer)
	//时间戳（来设置随机数生成起点）=计算机起始时间-计算机现在时间
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;

		}
	} while (input);

}
			
//goto语句（不建议使用）
void goto_sentence() {

again:
	printf("hello bit\n");//打乱结构，中断；处理错误
	goto again;

}
}

void shutdown_1() {
	//shutdown-s-t 60(cmd中)
	//shutdown-a(取消关机）
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在一分钟以内关机，如果输入：我是猪，就取消关机\n请输入:");
	scanf("%s", input);//数组不需要存地址
	if (strcmp(input, "我是猪")==0)//比较两个字符串
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
