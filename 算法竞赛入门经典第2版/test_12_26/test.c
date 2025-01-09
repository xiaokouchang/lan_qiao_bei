#define _CRT_SECURE_NO_WARNINGS 1 

//第一章
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 1 + 2);
//}


//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 3 - 4);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 5 * 6);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 8 / 4);
//	return 0;
//}


//整数/整数=整数,浮点数/浮点数=浮点数。
//#include<stdio.h>
//int main()
//{
//	printf("%.1f\n", 8 / 5);
//	return 0;
//}


//整数 - 浮点数 = 浮点数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	printf("%.8f\n", 1 + 2 * sqrt(3) / (5 - 0.1));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a + b);
//	return 0;
//}


//圆柱体的表面积
//#include<stdio.h>
//#include<math.h>
//#define PI 3.1415926
//int main()
//{
//	float r = 0;
//	float h = 0;
//	double s = 0;
//	scanf("%f %f", &r, &h);
//	s = PI * 2 * r * h + 2 * PI * pow(r, 2);
//	printf("Area=%.3f", s);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
// 	const double pi = acos(-1.0);
//	printf("%.10f", pi);
//	return 0;
//}


//三位数翻转
//123
//321
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int num1 = num / 100 + num / 10 % 10 * 10 + num % 10 * 100;
//	printf("%03d\n", num1);
//	return 0;
//}


//交换变量
//输入两个整数a和b,交换二者的值,然后输出。
//第一种方法
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", b, a);
//	return 0;
//}


//第二种方法
//三变量交换
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int temp = a;
//	a = b;
//	b = temp;
//	printf("%d %d", a, b);
//	return 0;
//}


//第三种方法
//混合与分离
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}


//已知鸡和兔的总数量为n,总腿数为m。
//输入n和m,依次输出鸡的数目和兔的数目。
//如果无解,则输出No answer。
//样例输入:
//14 32
//样例输出:
//12 2
//2*c+4*d = m
//2c+2d = 2n
//2d = m - 2n;
//d = 0.5m - n
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d %d", &n, &m);
//	d = 0.5 * m - n;
//	c = n - d;
//	if (c > 0 && d > 0)
//	{
//		printf("%d %d", c, d);
//	}
//	else
//	{
//		printf("No answer\n");
//	}
//	return 0;
//}


//三整数排序
//方法一
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b && b < c)printf("%d %d %d\n", a, b, c);
//	if (a < c && c < b)printf("%d %d %d\n", a, c, b);
//	if (b < a && a < c)printf("%d %d %d\n", b, a, c);
//	if (b < c && c < a)printf("%d %d %d\n", b, c, a);
//	if (c < a && a < b)printf("%d %d %d\n", c, a, b);
//	if (c < b && b < a)printf("%d %d %d\n", c, b, a);
//	return 0;
//}


//方法二
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a <= b && b <= c) printf("%d %d %d\n", a, b, c);
//	else if (a <= c && c <= b) printf("%d %d %d\n", a, c, b);
//	else if (b <= a && a <= c) printf("%d %d %d\n", b, a, c);
//	else if (b <= c && c <= a) printf("%d %d %d\n", b, c, a);
//	else if (c <= a && a <= b) printf("%d %d %d\n", c, a, b);
//	else if (c <= b && b <= a) printf("%d %d %d\n", c, b, a);//可以去掉if
//	return 0;
//}


//方法3
//#include<stdio.h>
//int main()
//{
//	int a, b, c, t;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b) { t = a; a = b; b = t; } //执行完毕之后a≤b
//	if (a > c) { t = a; a = c; c = t; } //执行完毕之后a≤c,且a≤b依然成立
//	if (b > c) { t = b; b = c; c = t; }
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//方法4
//冒泡排序
//#include<stdio.h>
//void sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		for (j = 0;j < sz - i - 1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr,sz);
//	for (i = 0;i < 3;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//输入3个整数,输出它们的平均值,保留3位小数。
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	float average = (a + b + c ) / 3.0;
//	printf("%.3f\n", average);
//	return 0;
//}


//输入华氏温度f,输出对应的摄氏温度c,保留3位小数。
//提示:c＝5(f－32)/9
//#include<stdio.h>
//int main()
//{
//	float c = 0;
//	float f = 0;
//	scanf("%f", &f);
//	c = 5 * (f - 32) / 9.0;
//	printf("%.3f", c);
//	return 0;
//}


//输入正整数n,输出1＋2＋…＋n的值
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum + i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//输入正整数n(n＜360),输出n度的正弦、余弦函数值。
//提示:使用数学函数。
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	const double pi = acos(-1.0);
//	double hu = (double)n * pi / 180.0;
//	double si = sin(hu);
//	double co = cos(hu);
//	printf("sin = %lf\ncos = %lf", si, co);
//	return 0;
//}


//一件衣服95元,若消费满300元,可打八五折。
//输入购买衣服件数,输出需要支付的金额(单位:元),保留两位小数。
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	float money = 0;
//	if (95 * num >= 300)
//	{
//		money = 95 * num * 0.85;
//		printf("%.2f\n", money);
//	}
//	else
//	{
//		money = 95 * num;
//		printf("%.2f\n", money);
//	}
//	return 0;
//}


//输入三角形3条边的长度值(均为正整数),判断是否能为直角三角形的3个边长。
//如果可以,则输出yes,如果不能,则输出no。
//如果根本无法构成三角形,则输出not a triangle。
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		printf("%d %d %d\n", a, b, c);
//	}
//	else
//	{
//		printf("not a triangle\n");
//	}
//	return 0;
//}


//闰年
//#include<stdio.h>
//int is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = is_leap_year(year);
//	if (ret)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}


//第二章
//输出1,2,3,....n的值
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//	for (i = 1; i <= num; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//输出所有形如aabb的4位完全平方数(即前两位数字相等,后两位数字也相等)。
//方法一
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	for (int a = 1; a <= 9; a++)
//		for (int b = 0; b <= 9; b++)
//		{
//			int n = a * 1100 + b * 11; 
//			//这里才开始使用n,因此在这里定义n
//			int m = floor(sqrt(n) + 0.5);
//			if (m * m == n) printf("%d\n", n);
//		}
//	return 0;
//}


//方法二
//#include<stdio.h>
//int main()
//{
//	for (int x = 1; ; x++)
//	{
//		int n = x * x;
//		if (n < 1000) continue;
//		if (n > 9999) break;
//		int hi = n / 100;
//		int lo = n % 100;
//		if (hi / 10 == hi % 10 && lo / 10 == lo % 10) 
//			printf("%d\n", n);
//	}
//	return 0;
//}


//3*n+1问题
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = 0;
//	while (num != 1)
//	{
//		if (num % 2 != 0)
//		{
//			num = 3 * num + 1;
//		}
//		else
//		{
//			num = num / 2;
//		}
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//计算sum = 1-1/3+1/5-1/7+.....+1/n
//第一种方法
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	int temp = 0;
//	do
//	{
//		temp = pow(-1, i) * (2 * i + 1);
//		sum = sum + 1.0 / temp;
//		i++;
//	} while (temp < pow(-6,10));
//	printf("%f\n", sum);
//	return 0;
//}


//第二种方法
//#include<stdio.h>
//int main() 
//{
//	double sum = 0;
//	for (int i = 0; ; i++) 
//	{
//		double term = 1.0 / (i * 2 + 1);
//		if (i % 2 == 0) sum += term;
//		else sum -= term;
//		if (term < 1e-6) break;
//	}
//	printf("%.6f\n", sum);
//	return 0;
//}


//输入n,计算S＝1!＋2!＋3!＋…＋n!的末6位(不含前导0)。
//n≤106,n!表示前n个正整数之积。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int num = 0;
//	int temp = 0;
//	scanf("%d", &num);
//	for (i = 1;i <= num;i++)
//	{	
//		int sum1 = 1;
//		for (j = 1;j <= i;j++)
//		{
//			sum1 = sum1 * j;
//		}
//		temp = sum1 + temp;
//	}
//	printf("%d\n", temp % 1000000);
//	return 0;
//}


#include<stdio.h>
void sort(int* arr, int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < sz - 1;i++)
	{
		for (j = 0;j < sz - 1 - i;j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int caluate(int* arr,int sz)
{
	int arr1[3] = { 0 };
	sort(arr,sz);
	int MAX = arr[0];
	int MIN = arr[sz - 1];

}
int main()
{
	int arr[100] = { 0 };
	int count = 0;
	int i = 0;
	while (scanf("%d", &arr[i]) != EOF)
	{
		i++;
	}
	caluate(arr,i);
	return 0;
}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}



