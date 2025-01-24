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
//Problem Description
//春天是鲜花的季节,水仙花就是其中最迷人的代表,数学上有个水仙花数
//他是这样定义的:"水仙花数"是指一个三位数,它的各位数字的立方和等于其本身
//比如:153=1^3+5^3+3^3。
//现在要求输出所有在m和n范围内的水仙花数。
//Input
//输入数据有多组,每组占一行,包括两个整数m和n(100<=m<=n<=999)。
//Output
//对于每个测试实例,要求输出所有在给定范围内的水仙花数
//输出的水仙花数必须大于等于m,并且小于等于n
//如果有多个,则要求从小到大排列在一行内输出,之间用一个空格隔开
//如果给定的范围内不存在水仙花数,则输出no;
//每个测试实例的输出占一行。
//Sample Input
//100 120
//300 380
//Sample Output
//no
//370 371
//#include<stdio.h>
//#include<math.h>
//int water_xian_flower(int num)
//{
//	if (num == pow(num / 100, 3) + pow(num / 10 % 10, 3) + pow(num % 10, 3))
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
//	int num1 = 0;
//	int num2 = 0;
//	int i = 0;
//	int flag = 0;
//	while (scanf("%d %d", &num1, &num2) == 2)
//	{
//		for (i = num1;i <= num2;i++)
//		{
//			int ret = water_xian_flower(i);
//			if (ret == 1)
//			{
//				flag = 1;
//				printf("%d ", i);
//			}
//		}
//		if (flag == 0)
//		{
//			printf("no\n");
//		}
//		else
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}


//第2011题
//Problem Description
//多项式的描述如下:
//1-1/2+1/3-1/4+1/5-1/6+...
//现在请你求出该多项式的前n项的和。
//Input
//输入数据由2行组成,首先是一个正整数m(m<100),表示测试实例的个数
//第二行包含m个正整数,对于每一个整数(不妨设为n,n<1000)
//求该多项式的前n项的和。
//Output
//对于每个测试实例n,要求输出多项式前n项的和。
//每个测试实例的输出占一行，结果保留2位小数。
//Sample Input
//2
//1 2
//Sample Output
//1.00
//0.50
//#include<stdio.h>
//#include<math.h>
//void shu_lie(int* arr,int num)
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= num; i++)
//	{
//		sum = sum + pow(-1, i + 1) * 1.0 / i;
//	}
//	printf("%.2f\n", sum);
//}
//int main()
//{
//	int arr[1000] = { 0 };
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	for (i = 0; i < num; i++)
//	{
//		scanf("%d", &arr[i]);
//		shu_lie(arr, arr[i]);
//	}
//	return 0;
//}


//第2012题
//对于表达式n^2+n+41,当n在(x,y)范围内取整数值时
//(包括x,y)(-39<=x<y<=50),判定该表达式的值是否都为素数。
//Input
//输入数据有多组,每组占一行,由两个整数x,y组成
//当x=0,y=0时,表示输入结束,该行不做处理。
//Output
//对于每个给定范围内的取值,如果表达式的值都为素数,则输出"OK"
//否则请输出"Sorry",每组输出占一行。
//Sample Input
//0 1
//0 0
//Sample Output
//OK
//#include <stdio.h>
//#include <math.h>
//// 判断一个数是否为素数
//int isPrime(int num)
//{
//    if (num <= 1)
//    {
//        return 0;
//    }
//    if (num <= 3) 
//    {
//        return 1;
//    }
//    if (num % 2 == 0 || num % 3 == 0)
//    {
//        return 0;
//    }
//    // 只需要检查到sqrt(num)即可
//    for (int i = 5; i * i <= num; i += 6) 
//    {
//        if (num % i == 0 || num % (i + 2) == 0) 
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//int main() 
//{
//    int x, y;
//    while (1) 
//    {
//        // 输入x和y
//        scanf("%d %d", &x, &y);
//        if (x == 0 && y == 0) {
//            break;
//        }
//        int flag = 1;
//        for (int n = x; n <= y; n++) 
//        {
//            int value = n * n + n + 41;
//            // 如果有一个值不是素数，将flag设为0并跳出循环
//            if (!isPrime(value)) 
//            {
//                flag = 0;
//                break;
//            }
//        }
//        // 根据flag的值输出结果
//        if (flag) 
//        {
//            printf("OK\n");
//        }
//        else 
//        {
//            printf("Sorry\n");
//        }
//    }
//    return 0;
//}


//第2013题
//Problem Description
//喜欢西游记的同学肯定都知道悟空偷吃蟠桃的故事
//你们一定都觉得这猴子太闹腾了,其实你们是有所不知:
//悟空是在研究一个数学问题！
//什么问题？他研究的问题是蟠桃一共有多少个！
//不过,到最后,他还是没能解决这个难题,呵呵^-^
//当时的情况是这样的:
//第一天悟空吃掉桃子总数一半多一个,第二天又将剩下的桃子吃掉一半多一个
//以后每天吃掉前一天剩下的一半多一个,到第n天准备吃的时候只剩下一个桃子。
//聪明的你,请帮悟空算一下,他第一天开始吃的时候桃子一共有多少个呢？
//Input
//输入数据有多组,每组占一行,包含一个正整数n(1<n<30)
//表示只剩下一个桃子的时候是在第n天发生的。
//Output	
//对于每组输入数据,输出第一天开始吃的时候桃子的总数,每个测试实例占一行。
//Sample Input
//2
//4
//Sample Output
//4
//22
//Author
//lcy
//Source
//C语言程序设计练习(二)
//#include<stdio.h>
//void tao(int num)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 1;
//	int sum = 1;
//	for (i = 1;i < num;i++)
//	{
//		temp = 2 * (sum + 1);
//		sum = temp;
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int num = 0;
//	while (scanf("%d", &num) == 1)
//	{
//		tao(num);
//	}
//	return 0;
//}


//第2014题
//Problem Description
//青年歌手大奖赛中,评委会给参赛选手打分。
//选手得分规则为去掉一个最高分和一个最低分,然后计算平均得分
//请编程输出某选手的得分。
//Input
//输入数据有多组,每组占一行,每行的第一个数是n(2<n<=100)表示评委的人数
//然后是n个评委的打分。
//Output
//对于每组输入数据,输出选手的得分,结果保留2位小数,每组输出占一行。
//Sample Input
//3 99 98 97
//4 100 99 98 97
//Sample Output
//98.00
//98.50
//#include<stdio.h>
//void score(int* arr, int count)
//{
//	arr[1] = 0;
//	arr[count - 1] = 0;
//	int i = 0;
//	int sum = 0;
//	for (i = 1;i < count;i++)
//	{
//		sum = sum + arr[i];
//	}
//	double average = (double)sum / (arr[0] - 2);
//	printf("%.2f\n", average);
//}
//void sort(int* arr, int count)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < count - 1;i++)
//	{
//		for (j = 0;j < count - i - 1;j++)
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
//	int num1 = 0;
//	int count = 0;
//	char c = 0;
//	//读入成绩
//	int arr[1000] = { 0 };
//	while (scanf("%d%c", &num1, &c) == 2)
//	{
//		arr[count++] = num1;
//		if (c == '\n')
//		{
//			sort(arr, count);
//			score(arr, count);
//			count = 0;
//			continue;
//		}
//	}
//	return 0;
//}


//第2015题
//Problem Description
//有一个长度为n(n<=100)的数列,该数列定义为从2开始的递增有序偶数
//现在要求你按照顺序每m个数求出一个平均值,如果最后不足m个
//则以实际数量求平均值。
//编程输出该平均值序列。
//Input
//输入数据有多组,每组占一行,包含两个正整数n和m,n和m的含义如上所述。
//Output
//对于每组输入数据,输出一个平均值序列,每组输出占一行。
//Sample Input
//3 2
//4 2
//Sample Output
//3 6
//3 7
//#include<stdio.h>
//void AVE(int* arr, int num2,int count1,int temp)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = count1;i < temp;i++)
//	{
//		sum = sum + arr[i];
//	}
//	printf("%d ",sum / num2);
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int i = 2;
//	int temp = 0;
//	int arr[1000] = { 0 };
//	int count = 0;
//	while (scanf("%d %d", &num1, &num2) == 2)
//	{
//		int count1 = 0;
//		temp = num2;
//		for (i = 2;i <= 2 * num1;i += 2)
//		{
//			arr[count++] = i;
//		}
//		if (num1 % num2 == 0)
//		{
//			for (i = 0;i < num1 / num2;i++)
//			{
//				AVE(arr, num2, count1, temp);
//				count1 += num2;
//				temp = num2 + temp;
//			}
//		}
//		else
//		{
//			for (i = 0;i < num1 / num2;i++)
//			{
//				AVE(arr, num2, count1,temp);
//				count1 += num2;
//				temp = num2 + temp;
//			}
//			printf("%d", arr[count - 1]);
//		}
//		count = 0;
//		printf("\n");
//	}
//	return 0;
//}


//第2016题
//Problem Description
//输入n(n<100)个数,找出其中最小的数,将它与最前面的数交换后输出这些数。
//Input
//输入数据有多组,每组占一行
//每行的开始是一个整数n,表示这个测试实例的数值的个数,跟着就是n个整数。
//n=0表示输入的结束,不做处理。
//Output
//对于每组输入数据，输出交换后的数列，每组输出占一行。
//Sample Input
//4 2 1 3 4
//5 5 4 3 2 1
//0
//Sample Output
//1 2 3 4
//1 4 3 2 5
//#include<stdio.h>
//#define INF 1000000000
////找出数组中的最小值
//int MIN(int* arr, int count)
//{
//	int min = INF;
//	int i = 0;
//	int count1 = 0;
//	for (i = 1; i < count; i++)
//	{
//		if (arr[i] < min)
//		{
//			count1 = i;
//			min = arr[i];
//		}
//	}
//	return count1;
//}
//void swap(int* arr, int count,int ret)
//{
//	int i = 0;
//	int temp = arr[1];
//	arr[1] = arr[ret];
//	arr[ret] = temp;
//	for (i = 1; i < count; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int count = 0;
//	int num = 0;
//	char c = 0;
//	while (scanf("%d%c", &num, &c) == 2)
//	{
//		arr[count++] = num;
//		if (arr[0] == 0 || c == '\n')
//		{
//			int ret = MIN(arr, count);
//			swap(arr, count, ret);
//			printf("\n");
//			continue;
//		}
//	}
//	return 0;
//}


//第2017题
//Problem Description
//对于给定的一个字符串,统计其中数字字符出现的次数。
//Input
//输入数据有多行,第一行是一个整数n,表示测试实例的个数
//后面跟着n行,每行包括一个由字母和数字组成的字符串。
//Output
//对于每个测试实例,输出该串中数值的个数,每个输出占一行。
//Sample Input
//2
//asdfasdf123123asdfasdf
//asdf111111111asdfasdfasdf
//Sample Output
//6
//9
//#include<stdio.h>
//void NUM(char* arr, int count)
//{
//	int i = 0;
//	int j = 0;
//	int count1 = 0;
//	char arr1[10] = { '0','1','2','3','4','5','6','7','8','9' };
//	for (i = 0;i < count;i++)
//	{
//		for (j = 0;j < 10;j++)
//		{
//			if (arr[i] == arr1[j])
//			{
//				count1++;
//				break;
//			}
//		}
//	}
//	printf("%d\n", count1);
//}
//int main()
//{
//	int n = 0;
//	char num = 0;
//	char arr[100] = { 0 };
//	int i = 0;
//	char c = 0;
//	scanf("%d", &n);
//	int flag = 0;
//	int count = 0;
//	for (i = 0;i < n;i++)
//	{
//		while (scanf("%c%c", &num, &c) == 2)
//		{
//			if (num == '\n' && flag == 0)
//			{
//				flag = 1;
//				arr[count++] = c;
//				continue;
//			}
//			if (c == '\n')
//			{
//				arr[count++] = num;
//				NUM(arr, count);
//				count = 0;
//				break;
//			}
//			else
//			{
//				arr[count++] = num;
//				arr[count++] = c;
//			}
//		}
//	}
//	return 0;
//}


//第2018题

//第2019题
//Problem Description
//有n(n<=100)个整数,已经按照从小到大顺序排列好
//现在另外给一个整数x,请将该数插入到序列中,并使新的序列仍然有序。
//Input
//输入数据包含多个测试实例,每组数据由两行组成
//第一行是n和m,第二行是已经有序的n个数的数列。
//n和m同时为0标示输入数据的结束,本行不做处理。
//Output
//对于每个测试实例,输出插入新的元素后的数列。
//Sample Input
//3 3
//1 2 4
//0 0
//Sample Output
//1 2 3 4
//#include<stdio.h>
//void sort(int* arr, int num1)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < num1;i++)
//	{
//		for (j = 0;j < num1 - i - 1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0;i < num1;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num = 0;
//	int i = 0;
//	char c = 0;
//	int arr[100] = { 0 };
//	while (scanf("%d %d", &num1, &num2) == 2)
//	{
//		if (num1 == 0 && num2 == 0)
//		{
//			break;
//		}
//		for (i = 0;i < num1;i++)
//		{
//			scanf("%d%c", &num, &c);
//  			arr[i] = num;
//		}
//		arr[num1] = num2;
//		sort(arr, num1 + 1);
//	}
//	return 0;
//}


//第2020题
#include<stdio.h>
void sort(int* arr1, int count)
{
	int i = 0;
	int j = 0;
	int arr2[100] = { 0 };
	for (i = 1;i < count;i++)
	{
		if (arr1[i] < 0)
		{
			arr2[i] = -arr1[i];
		}
		else
		{
			arr2[i] = arr1[i];
		}
	}
	for (i = 1;i < count;i++)
	{
		for (j = 1;j < count - i;j++)
		{
			if (arr1[j] > arr1[j + 1])
			{
				int temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
			}
		}
	}
	for (i = 1;i < count;i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
}
int main()
{
	int num1 = 0;
	int count = 0;
	char c = 0;
	int arr1[100] = { 0 };
	while (scanf("%d%c", &num1, &c) == 2)
	{
		if (num1 == 0 && count == arr1[0])
		{
			break;
		}
		arr1[count++] = num1;
		if (c == '\n')
		{
			sort(arr1,count);
			count = 0;
			continue;
		}
	}
	return 0;
}



//#include<stdio.h>
//void sort(int* arr, int count)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < count;i++)
//	{
//		for (j = 0;j < count - i - 1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0;i < count;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int num1 = 0;
//	int count = 0;
//	char c = 0;
//	int arr[100] = { 0 };
//	while (scanf("%d%c", &num1, &c) == 2)
//	{
//		/*if (num1 == 0 && count == arr[0])
//		{
//			break;
//		}*/
//		arr[count++] = num1;
//		if (c == '\n')
//		{
//			sort(arr, count);
//			count = 0;
//			continue;
//		}
//	}
//	return 0;
//}
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
