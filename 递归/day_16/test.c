////使用递归和非递归实现斐波纳锲数列
//#include <stdio.h>
//#include <stdlib.h>
////int fib(int num)
////{
////	if (num < 3)
////		return 1;
////	else
////		return fib(num - 2) + fib(num - 1);
////}
//int fib(int num)//非递归
//{
//	int a = 1;
//	int b = 1;
//	int c = a;
//	while (num > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		num--;
//	}
//	return c;
//}
//int main()
//{
//	int num = 0;
//	printf("请输入你想计算第几位的费波那契数:\n");
//	scanf_s("%d",&num);
//	int ret = fib(num);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//用递归实现n的k次方
//#include <stdio.h>
//#include <stdlib.h>
//int CiFang(int num, int k)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 0; i < k; i++)
//	{
//		ret = ret*num;
//	}
//	return ret;
//}
////int CiFang(int num, int k)//递归
////{
////	if (k<=1)
////		return num;
////	else
////		return num*(CiFang(num, k - 1));
////}
//int main()
//{
//	int num = 0;
//	int k = 0;
//	printf("请输入你想计算的数字:");
//	scanf_s("%d %d", &num, &k);
//	int ret = CiFang(num, k);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//实现函数返回组成它的数字之和
//#include <stdio.h>
//#include <stdlib.h>
//int Num(int num)
//{
//	if (num < 10)
//		return num;
//	else
//	{
//		return num % 10 + Num(num / 10);
//	}
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个数字:");
//	scanf_s("%d", &num);
//	int ret = Num(num);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//递归实现字符串逆序
//#include <stdio.h>
//#include <stdlib.h>
//void reverse_string(char *str)
//{
//	if (*str == 0)
//		return;
//	else
//	{
//		char t = *str;
//		int len = strlen(str) - 1;
//		*str = str[len];
//		str[len] = 0;
//		reverse_string(str + 1);
//		str[len] = t;
//	}
//}
//int main()
//{
//	char buf[10] = "abcdefg";
//	reverse_string(buf);
//	printf("%s\n", buf);
// 	system("pause");
//	return 0;
//}
//用递归实现n的阶乘
//#include <stdio.h>
//#include <stdlib.h>
//int JieCheng(int num)//非递归
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= num; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
////int JieCheng(int num)//递归
////{
////	if (num <= 1)
////		return num;
////	else
////		return num*JieCheng(num - 1);
////}
//int main()
//{
//	int num = 0;
//	printf("请输入一个你想计算的数字:");
//	scanf_s("%d", &num);
//	int ret = JieCheng(num);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//用递归打印一个数的每一位
#include <stdio.h>
#include <stdlib.h>
void Print(int num)
{
	if (num > 9)
		Print(num/10);
	printf("%d ", num%10);
}
int main()
{
	int num = 0;
	printf("请输入一个数:");
	scanf_s("%d", &num);
	Print(num);
	system("pause");
	return 0;
}