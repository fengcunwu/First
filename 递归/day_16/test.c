////ʹ�õݹ�ͷǵݹ�ʵ��쳲���������
//#include <stdio.h>
//#include <stdlib.h>
////int fib(int num)
////{
////	if (num < 3)
////		return 1;
////	else
////		return fib(num - 2) + fib(num - 1);
////}
//int fib(int num)//�ǵݹ�
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
//	printf("�������������ڼ�λ�ķѲ�������:\n");
//	scanf_s("%d",&num);
//	int ret = fib(num);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//�õݹ�ʵ��n��k�η�
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
////int CiFang(int num, int k)//�ݹ�
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
//	printf("������������������:");
//	scanf_s("%d %d", &num, &k);
//	int ret = CiFang(num, k);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//ʵ�ֺ������������������֮��
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
//	printf("������һ������:");
//	scanf_s("%d", &num);
//	int ret = Num(num);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//�ݹ�ʵ���ַ�������
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
//�õݹ�ʵ��n�Ľ׳�
//#include <stdio.h>
//#include <stdlib.h>
//int JieCheng(int num)//�ǵݹ�
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= num; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
////int JieCheng(int num)//�ݹ�
////{
////	if (num <= 1)
////		return num;
////	else
////		return num*JieCheng(num - 1);
////}
//int main()
//{
//	int num = 0;
//	printf("������һ��������������:");
//	scanf_s("%d", &num);
//	int ret = JieCheng(num);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//�õݹ��ӡһ������ÿһλ
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
	printf("������һ����:");
	scanf_s("%d", &num);
	Print(num);
	system("pause");
	return 0;
}