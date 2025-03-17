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


//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int n = 0;
//	int max = -9999;
//	int min = 9999;
//	double sum = 0;
//	while (scanf("%d", &x) == 1)
//	{
//		max = min = x;
//		sum = sum + x;
//		if (max < x)
//		{
//			max = x;
//		}
//		if (min > x)
//		{
//			min = x;
//		}
//		n++;
//	}
//	printf("%d %d %f\n", max, min, sum / n);
//	return 0;
//}


//输入一些整数,求出它们的最小值、最大值和平均值(保留3位小数)。
//输入保证这些数都是不超过1000的整数。
//输入包含多组数据,每组数据第一行是整数个数n,第二行是n个整数。
//n＝0为输入结束标记,程序应当忽略这组数据。
//相邻两组数据之间应输出一个空行。
//样例输入:
//8
//2 8 3 5 1 7 3 6
//4
//- 4 6 10 0
//0
//样例输出:
//Case 1: 1 8 4.375
//Case 2 : -4 10 3.000
//#include<stdio.h>
//#define INF 1000000000
//int main()
//{
//	int x, n = 0, s = 0, kase = 0;
//	while (scanf("%d", &n) == 1 && n)
//	{
//		int min = INF, max = -INF;
//		s = 0;
//		for (int i = 0; i < n; i++) 
//		{
//			scanf("%d", &x);
//			s += x;
//			if (x < min) min = x;
//			if (x > max) max = x;
//		}
//		if (kase)
//		{
//			printf("\n");
//		}
//		printf("Case %d: %d %d %.3f\n", ++kase, min, max, (double)s / n);
//	}
//	return 0;
//}


//输出100～999中的所有水仙花数。
//若3位数ABC满足ABC＝A3＋B3＋C3,则称其为水仙花数。
//例如153＝13＋53＋33,所以153是水仙花数。
//#include<stdio.h>
//#include<math.h>
//int narcissus(int num)
//{
//	if (num == pow(num / 100, 3) + pow(num % 10, 3) + pow(num / 10 % 10, 3))
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
//	int i = 0;
//	for (i = 100;i <= 999;i++)
//	{
//		int ret = narcissus(i);
//		if (ret == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//相传韩信才智过人,从不直接清点自己军队的人数
//只要让士兵先后以三人一排、五人一排、七人一排地变换队形
//而他每次只掠一眼队伍的排尾就知道总人数了。
//输入包含多组数据,每组数据包含3个非负整数a,b,c
//表示每种队形排尾的人数(a＜3,b＜5,c＜7)
//输出总人数的最小值(或报告无解)。
//已知总人数不小于10,不超过100。
//输入到文件结束为止。
//样例输入:
//2 1 6
//2 1 3
//样例输出:
//Case 1 : 41
//Case 2 : No answer
//#include<stdio.h>
//int NUM(int num1, int num2, int num3)
//{
//	int i = 0;
//	int flag = 1;
//	for (i = 10;i <= 100;i++)
//	{
//		if (num1 == i % 3 && num2 == i % 5 && num3 == i % 7)
//		{
//			return i;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	int n = 1;
//	while (scanf("%d %d %d", &num1, &num2, &num3) != EOF )
//	{
//		int ret = NUM(num1, num2, num3);
//		if (ret == 1)
//		{
//			printf("Case %d : No answer\n", n);
//			n++;
//		}
//		else
//		{
//			printf("Case %d : %d\n", n, ret);
//			n++;
//		}
//	}
//	return 0;
//}


//输入正整数n≤20，输出一个n层的倒三角形。
//例如,n＝5时输出如下:
//#########
// #######
//  #####
//   ###
//    #
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int num = 0;
//	int temp = 0;
//	scanf("%d", &num);
//	//5 9
//	//4 7
//	//3 5
//	//2 3
//	//1 1
//	for (i = num;i > 0;i--)
//	{
//		for (k = 0;k < temp;k++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j < 2 * i - 1;j++)
//		{
//			printf("*");
//		}
//		temp++;
//		printf("\n");
//	}
//	return 0;
//}


//输入两个正整数n＜m＜10^6,输出1/(n)^2+1/(n+1)^2+......+1/(m)^2
//保留5位小数。
//输入包含多组数据,结束标记为n＝m＝0。
//提示：本题有陷阱。
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	long long num1 = 0;
//	long long num2 = 0;
//	while (scanf("%lld %lld", &num1, &num2) == 2)
//	{
//		double sum = 0;
//		long long i = 0;
//		for (i = num1;i <= num2;i++)
//		{
//			sum = 1.0 / pow(i, 2) + sum;
//		}
//		printf("%.5f\n", sum);
//	}
//	return 0;
//}


//输入正整数a,b,c,输出a/b的小数形式,精确到小数点后c位。
//a,b≤10^6,c≤100。
//输入包含多组数据,结束标记为a＝b＝c＝0。
//样例输入:
//1 6 4
//0 0 0
//样例输出:
//Case 1: 0.1667
//#include<stdio.h>
//int main()
//{
//	double num1 = 0;
//	double num2 = 0;
//	int num3 = 0;
//	int n = 1;
//	double sum = 0;
//	while (scanf("%lf %lf %d", &num1, &num2, &num3) == 3)
//	{
//		sum = num1 / num2;
//		printf("Case %d : %.*f\n", n, num3, sum);
//		n++;
//	}
//	return 0;
//}


//用1,2,3,…,9组成3个三位数abc,def和ghi,每个数字恰好使用一次
//要求abc:def:ghi＝1:2:3。
//按照"abc def ghi"的格式输出所有解, 每行一个解。
//提示:不必太动脑筋。
//192 384 576
//219 438 657
//273 546 819
//327 654 981
//第一种方法
//#include<stdio.h>
////判断9个数是否有0
//int bi1(int num1, int num2, int num3)
//{
//	int arr[9] = { 0 };
//	int i = 0;
//	arr[0] = num1 / 100;
//	arr[1] = num1 / 10 % 10;
//	arr[2] = num1 % 10;
//	arr[3] = num2 / 100;
//	arr[4] = num2 / 10 % 10;
//	arr[5] = num2 % 10;
//	arr[6] = num3 / 100;
//	arr[7] = num3 / 10 % 10;
//	arr[8] = num3 % 10;
//	for (i = 0;i < 9;i++)
//	{
//		if (arr[i] == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
////判断9个数是否相等
//int bi2(int i, int j, int k)
//{
//	int m = 0;
//	int num1 = 0;
//	int count = 0;
//	int arr[9] = { 0 };
//	arr[0] = i / 100;
//	arr[1] = i / 10 % 10;
//	arr[2] = i % 10;
//	arr[3] = j / 100;
//	arr[4] = j / 10 % 10;
//	arr[5] = j % 10;
//	arr[6] = k / 100;
//	arr[7] = k / 10 % 10;
//	arr[8] = k % 10;
//	int use[10] = { 0 };//arr[m]最小为1,+9为10
//	for (m = 0;m < 9;m++)
//	{
//		if (use[arr[m]] == 0)
//		{
//			use[arr[m]] = 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int num2 = 0;
//	int num3 = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 123;i <= 333;i++)
//	{
//		j = 2 * i;
//		k = 3 * i;
//		int ret1 = bi1(i, j, k);
//		if (ret1 == 1)
//		{
//			continue;
//		}
//		int ret2 = bi2(i, j, k);
//		if (ret2 == 1)
//		{
//			printf("%d %d %d\n", i, j, k);
//		}
//	}
//	return 0;
//}


//第二种方法
//#include <stdio.h>
//// 交换函数，用于交换数组元素
//void swap(int* a, int* b) 
//{
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//// 生成全排列的函数
//void permute(int* arr, int start, int end) 
//{
//    if (start == end) 
//    {
//        int abc = arr[0] * 100 + arr[1] * 10 + arr[2];
//        int def = arr[3] * 100 + arr[4] * 10 + arr[5];
//        int ghi = arr[6] * 100 + arr[7] * 10 + arr[8];
//        if (def == 2 * abc && ghi == 3 * abc) 
//        {
//            printf("%d %d %d\n", abc, def, ghi);
//        }
//        return;
//    }
//    for (int i = start; i <= end; i++) 
//    {
//        swap(&arr[start], &arr[i]);
//        permute(arr, start + 1, end);
//        swap(&arr[start], &arr[i]);
//    }
//}
//
//int main() {
//    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//    permute(arr, 0, 8);
//    return 0;
//}


//数字逆序输出
//#include<stdio.h>
//void print(int* arr, int count)
//{
//	int i = 0;
//	int count1 = 0;
//	int temp = 10;
//	for (i = 0; i < count; i++)
//	{
//		temp = arr[i];
//		while (temp > 0)
//		{
//			printf("%d ", temp % 10);
//			temp = temp / 10;
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int num = 0;
//	int count = 0;
//	while (scanf("%d", &num) == 1)
//	{
//		arr[count++] = num;
//		if (getchar() == '\n')
//		{
//			print(arr, count);
//			count = 0;
//		}
//	}
//	return 0;
//}


//逆序输出s
//方法1
//#include<stdio.h>
//#define ROW 100
//int main()
//{
//	int arr[ROW] = { 0 };
//	int count = 0;
//	char c = 0;
//	int num = 0;
//	while (scanf("%d%c", &num, &c) == 2)
//	{
//		if (c == '\n')
//		{
//			arr[count++] = num;
//			break;
//		}
//		arr[count++] = num;
//	}
//	int i = 0;
//	for (i = count - 1;i >= 0;i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//方法2
//#include<stdio.h>
//#define maxn 105
//int a[maxn];
//int main()
//{
//	int x, n = 0;
//	while (scanf("%d", &x) == 1)
//	{
//		a[n++] = x;
//		for (int i = n - 1; i >= 1; i--)
//		{
//			printf("%d ", a[i]);
//		}
//		printf("%d\n", a[0]);
//	}
//	return 0;
//}



//开灯问题。有n盏灯,编号为1～n。
//第1个人把所有灯打开,第2个人按下所有编号为2的倍数的开关(这些灯将被关掉)
//第3个人按下所有编号为3的倍数的开关
//(其中关掉的灯将被打开,开着的灯将被关闭)
//依此类推。
//一共有k个人,问最后有哪些灯开着？
//输入n和k,输出开着的灯的编号。
//k≤n≤1000。
//样例输入:
//7 3
//样例输出:
//1 5 6 7
//方法一
//#include<stdio.h>
//void open(int* arr, int num,int num1)
//{
//	int i = 0;
//	for (i = num - 1; i <= num1; i += num)
//	{
//		if (arr[i] == 1)
//		{
//			arr[i] = 0;
//		}
//		else
//		{
//			arr[i] = 1;
//		}
//	}
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int i = 0;
//	int j = 0;
//	int arr[100] = { 0 };
//	while (scanf("%d %d", &num1, &num2) == 2)
//	{
//		for (i = 0; i < num1; i++)
//		{
//			arr[i] = 1;
//		}
//		for (j = 2; j <= num2; j++)
//		{
//			open(arr, j , num1);
//		}
//		for (i = 0; i < num1; i++)
//		{
//			if (arr[i] == 1)
//			{
//				printf("%d ", i + 1);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#define maxn 1010
//int a[maxn];
//int main()
//{
//	int n, k, first = 1;
//	memset(a, 0, sizeof(a));
//	scanf("%d %d", &n, &k);
//	for (int i = 1; i <= k; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (j % i == 0)
//			{
//				a[j] = !a[j];
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i]) 
//		{ 
//			if (first)
//			{
//				first = 0; 
//			}
//			else
//			{
//				printf(" ");
//			}
//			printf("%d", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}


//蛇形填数
//在n×n方阵里填入1,2,…,n×n,要求填成蛇形。
//例如,n＝4时方阵为:
//10 11 12 1
// 9 16 13 2
// 8 15 14 3
// 7  6  5 4
//#include<stdio.h>
//#define ROW 100
//#define COL 100
//void snake(int num)
//{
//	int num1 = 1;
//	int top = 0;
//	int bottom = num - 1;
//	int left = 0;
//	int right = num - 1;
//	int arr[ROW][COL] = { 0 };
//	int i = 0;
//	while (left <= right && top <= bottom)
//	{
//		for (i = right;i > 0;i--)
//		{
//			arr[i][right] = num1++;
//		}
//		right--;
//		for (i = bottom;i > 0;i--)
//		{
//			arr[bottom][i] = num1++;
//		}
//		bottom--;
//		for (i = ;i > 0;i--)
//		{
//			arr[i][i] = num1++;
//		}
//		bottom--;
//	}
//}
//int main()
//{
//	int num = 0;
//	scannf("%d", &num);
//	snake(num);
//	return 0;
//}


//1   2  3 4
//12 13 14 5
//11 16 15 6
//10  9  8 7
#include<stdio.h>
#define ROW 100
#define COL 100
void snake(int num)
{
	int num1 = 1;
	int top = 0;
	int bottom = num - 1;
	int left = 0;
	int right = num - 1;
	int arr[ROW][COL] = { 0 };
	int i = 0;
	while (left <= right && top <= bottom)
	{
		for (i = left;i <= right;i++)
		{
			arr[left][i] = num1++;
		}
		top++;
		for (i = top;i <= bottom;i++)
		{
			arr[i][right] = num1++;
		}
		right--;
		for (i = right;i > 0;i--)
		{
			arr[bottom][i] = num1++;
		}
		bottom--;
		for (i = right;i > 0;i--)
		{
			arr[i][left] = num1++;
		}
		left++;
	}
	int j = 0;
	for (i = 0;i < num;i++)
	{
		for (j = 0;j < num;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf('\n');
	}
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	snake(num);
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



