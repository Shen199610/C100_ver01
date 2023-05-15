#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


//请编写函数fun，它的功能是：计算并输出n(包括n)以内能被5或9整除的所有自然数的倒数之和。

double fun98(int x) {
	double sum = 0;
	for (int i = 1; i <= x; i++)
	{
		if (x % 9 == 0 || x % 5 == 0) {
			sum += 1.0 / x;
		}
	}
	return sum;
}