#define _CRT_SECURE_NO_WARNINGS 1 
//https://acm.hdu.edu.cn/listproblem.php?vol=11
//第2000题
//输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
//Input
//输入数据有多组，每组占一行，有三个字符组成，之间无空格。
//Output
//对于每组输入数据，输出一行，字符中间用一个空格分开。
//Sample Input
//qwe
//asd
//zxc
//Sample Output
//e q w
//a d s
//c x z
//#include<stdio.h>
//int main()
//{
//	char a = 0;
//	char b = 0;
//	char c = 0;
//	while (scanf(" %c %c %c", &a, &b, &c) != EOF)
//	{
//		if ((int)a > (int)(b))
//		{
//			int temp = a;
//			a = b;
//			b = temp;
//		}
//		if ((int)a > (int)(c))
//		{
//			int temp = a;
//			a = c;
//			c = temp;
//		}
//		if ((int)b > (int)(c))
//		{
//			int temp = b;
//			b = c;
//			c = temp;
//		}
//		printf("%c %c %c\n", a, b, c);
//	}
//	return 0;
//}


//第1001题
//Problem Description
//Hey, welcome to HDOJ(Hangzhou Dianzi University Online Judge).
//In this problem, your task is to calculate SUM(n) = 1+2+3+...+n.
//Input
//The input will consist of a series of integers n, one integer per line.
//Output
//For each case
//output SUM(n) in one line, followed by a blank line.
//You may assume the result will be in the range of 32-bit signed integer.
//Sample Input
//1
//100
//Sample Output
//1
//5050
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int sum = 0;
//	for (i = 1;i <= num;i++)
//	{
//		sum = sum + i;
//	}
//	printf("%d\n", sum);
//}


//第2001题
//Problem Description
//输入两点坐标(X1,Y1),(X2,Y2),计算并输出两点间的距离。
//Input
//输入数据有多组,每组占一行,由4个实数组成
//分别表示x1,y1,x2,y2,数据之间用空格隔开。
//Output
//对于每组输入数据,输出一行,结果保留两位小数。
//Sample Input
//0 0 0 1
//0 1 1 0
//Sample Output
//1.00
//1.41
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	int num4 = 0;
//	while (scanf("%d %d %d %d", &num1, &num2, &num3, &num4) == 4)
//	{
//		double sum1 = pow(pow(num3 - num1, 2) + pow(num4 - num2, 2), 1.0 / 2);
//		printf("%.2f\n", sum1);
//	}
//	return 0;
//}


//第2002题
//Problem Description
//根据输入的半径值,计算球的体积。
//Input
//输入数据有多组,每组占一行,每行包括一个实数,表示球的半径。
//Output
//输出对应的球的体积,对于每组输入数据,输出一行,计算结果保留三位小数。
//Sample Input
//1
//1.5
//Sample Output
//4.189
//14.137
//#define PI 3.1415927
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	const double pi = acos(-1.0);
//	double r = 0;
//	while (scanf("%lf", &r) != EOF)
//	{
//		double volume = 0;
//		volume = 4.0 / 3 * pi * pow(r, 3);
//		printf("%.3f\n", volume);
//	}
//	return 0;
//}


//第2003题
//Problem Description
//求实数的绝对值。
//Input
//输入数据有多组,每组占一行,每行包含一个实数。
//Output
//对于每组输入数据,输出它的绝对值,要求每组数据输出一行,结果保留两位小数。
//Sample Input
//123
//-234.00
//Sample Output
//123.00
//234.00
//#include<stdio.h>
//void jue_dui_zhi(double num)
//{
//	if (num > 0)
//	{
//		printf("%.2f\n", num);
//	}
//	else
//	{
//		num = -num;
//		printf("%.2f\n", num);
//	}
//}
//int main()
//{
//	double num = 0;
//	while (scanf("%lf", &num) != EOF)
//	{
//		jue_dui_zhi(num);
//	}
//	return 0;
//}


//第2004题
//Problem Description
//输入一个百分制的成绩t,将其转换成对应的等级,具体转换规则如下:
//90~100为A;
//80~89为B;
//70~79为C;
//60~69为D;
//0~59为E;
//Input
//输入数据有多组,每组占一行,由一个整数组成。
//Output
//对于每组输入数据,输出一行。
//如果输入数据不在0~100范围内,请输出一行:"Score is error!"。
//Sample Input
//56
//67
//100
//123
//Sample Output
//E
//D
//A
//Score is error!
//#include<stdio.h>
//int main()
//{
//	int score = 0;
//	while (scanf("%d", &score) != EOF)
//	{
//		if ((score >= 0) && (score <= 59))
//		{
//			printf("E\n");
//		}
//		else if ((score >= 60) && (score <= 69))
//		{
//			printf("D\n");
//		}
//		else if ((score >= 70) && (score <= 79))
//		{
//			printf("C\n");
//		}
//		else if ((score >= 80) && (score <= 89))
//		{
//			printf("B\n");
//		}
//		else if ((score >= 90) && (score <= 100))
//		{
//			printf("A\n");
//		}
//		else
//		{
//			printf("Score is error!\n");
//		}
//	}
//	return 0;
//}


//第2005题
//Problem Description
//给定一个日期,输出这个日期是该年的第几天。
//Input
//输入数据有多组,每组占一行,数据格式为YYYY/MM/DD组成
//具体参见sample input
//另外,可以向你确保所有的输入数据是合法的。
//Output
//对于每组输入数据,输出一行,表示该日期是该年的第几天。
//Sample Input
//1985 / 1 / 20
//2006 / 3 / 12
//Sample Output
//20
//71
//#include<stdio.h>
//void DAY(int year, int month, int day)
//{
//	int sum = 0;
//	int i = 0;
//	int count1 = 0;
//	int count2 = 0;
//	int two = 0;
//	for (i = 1; i <= month-1; i++)
//	{
//		if ((i == 1 )||(i==3)||(i==5)||(i==7)||(i==8)|| (i==10))
//		{
//			count1++;
//		}
//		if((i==4)||(i==6)||(i==9)||(i==11))
//		{
//			count2++;
//		}
//	}
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		two = 29;
//	}
//	else
//	{
//		two = 28;
//	}
//	if (month > 2)
//	{
//		sum = 31 * count1 + 30 * count2 + two + day;
//	}
//	else if(month == 1)
//	{
//		sum = day;
//	}
//	else
//	{
//		sum = 31 + day;
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	while (scanf("%d%*c%d%*c%d",&year,&month,&day) != EOF)
//	{
//		DAY(year, month, day);
//	}
//	return 0;
//}


//第2006题
//Problem Description
//给你n个整数,求他们中所有奇数的乘积。
//Input
//输入数据包含多个测试实例,每个测试实例占一行
//每行的第一个数为n,表示本组数据一共有n个,接着是n个整数
//你可以假设每组数据必定至少存在一个奇数。
//Output
//输出每组数中的所有奇数的乘积,对于测试实例,输出一行。
//Sample Input
//3 1 2 3
//4 2 3 4 5
//Sample Output
//3
//15
//#include<stdio.h>
//int qu_chong(int* arr,int size)
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 0; i < size; i++)
//	{
//		int temp = arr[i];
//		j = j + 1;
//		int k = 0;
//		while (j < size)
//		{
//			if (arr[j] == temp)
//			{
//				count++;
//				for (k = j; k < size; k++)
//				{
//					arr[k] = arr[k + 1];
//				}
//			}
//			else
//			{
//				j++;
//			}
//		}
//	}
//	return size-count;
//}
//void ji_shu(int* arr,int size)
//{
//	int i = 0;
//	int sum = 1;
//	int ret = qu_chong(arr,size);
//	for (i = 0; i < ret; i++)
//	{
//		if ((arr[i] % 2 == 1 ))
//		{
//			sum = sum * arr[i];
//		}
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int arr[1000] = { 0 };
//	int num = 0;
//	int i = 0;
//	char c = 0;
//	while(scanf("%d%c", &num,&c) == 2)
//	{
//		arr[i++] = num;
//		if (c != ' ')
//		{
//			break;
//		}
//	}
//	ji_shu(arr,i);
//	return 0;
//}


//第2007题
//Problem Description
//给定一段连续的整数,求出他们中所有偶数的平方和以及所有奇数的立方和。
//Input
//输入数据包含多组测试实例,每组测试实例包含一行,由两个整数m和n组成。
//Output
//对于每组输入数据,输出一行,应包括两个整数x和y
//分别表示该段连续的整数中所有偶数的平方和以及所有奇数的立方和。
//你可以认为32位整数足以保存结果。
//Sample Input
//1 3
//2 5
//Sample Output
//4 28
//20 152
//#include<stdio.h>
//#include<math.h>
//void cheng(int* arr,int num,int sum1,int sum2)
//{
//	if (num % 2 == 0)
//	{
//		arr[0] = arr[0] + pow(num, 2);
//	}
//	else
//	{
//		arr[1] = pow(num, 3) + arr[1];
//	}
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int i = 0;
//	while (scanf("%d %d", &num1, &num2) == 2)
//	{
//		int sum1 = 0;
//		int sum2 = 0;
//		int arr[2] = { 0 };
//		for (i = num1; i <= num2; i++)
//		{
//			cheng(arr,i,sum1,sum2);
//		}
//		for (i = 0;i < 2;i++)
//		{
//			printf("%d ", arr[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//第2008题
//Problem Description
//统计给定的n个数中,负数、零和正数的个数。
//Input
//输入数据有多组,每组占一行,每行的第一个数是整数n(n<100)
//表示需要统计的数值的个数,然后是n个实数
//如果n=0,则表示输入结束,该行不做处理。
//Output
//对于每组输入数据,输出一行a,b和c
//分别表示给定的数据中负数、零和正数的个数。
//Sample Input
//6 0 1 2 3 - 1 0
//5 1 2 3 4 0.5
//0
//Sample Output
//1 2 3
//0 0 5
//#include<stdio.h>
//void shu(int* arr,int count)
//{
//	int i = 0;
//	int ling = 0;
//	int zheng = 0;
//	int fu = 0;
//	for (i = 1;i < count;i++)
//	{
//		if (arr[i] > 0)
//		{
//			zheng++;
//		}
//		else if (arr[i] == 0)
//		{
//			ling++;
//		}
//		else
//		{
//			fu++;
//		}
//	}
//	printf("%d %d %d\n", fu, ling, zheng);
//}
//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i = 0;
//	char c = 0;
//	int arr[1000] = { 0 };
//	while (scanf("%d%c", &num, &c) == 2)
//	{
//		arr[count++] = num;
//		if (c == '\n')
//		{
//			shu(arr, count);
//			count = 0;
//			continue;
//		}
//	}
//	return 0;
//}


//第2009题
//Problem Description
//数列的定义如下:
//数列的第一项为n,以后各项为前一项的平方根,求数列的前m项的和。
//Input
//输入数据有多组,每组占一行,由两个整数n(n<10000)和m(m<1000)组成
//n和m的含义如前所述。
//Output
//对于每组输入数据,输出该数列的和,每个测试实例占一行,要求精度保留2位小数。
//Sample Input
//81 4
//2 2
//Sample Output
//94.73
//3.41
//#include<stdio.h>
//#include<math.h>
//void SUM(int num1, int num2)
//{
//	int i = 0;
//	double sum = 0;
//	double temp = num1;
//	for (i = 1; i <= num2;i++)
//	{
//		num1 = temp;
//		sum = sum + temp;
//		temp = pow(num1, 0.5);
//	}
//	printf("%.2f\n", sum);
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	while (scanf("%d %d", &num1, &num2) == 2)
//	{
//		SUM(num1, num2);
//	}
//	return 0;
//}


//第2010题

//第2011题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
//第2003题
