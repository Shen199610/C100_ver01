#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 5
#define n 22

//编写函数，它的功能是：求n以内(不包括n)
//同时能被3与7整除的所有自然数之和的平方根s，并作为函数值返回。

double fun58(int x) {
	int sum = 0;
	for (int i = 1; i < x; i++)
	{
		if (i % 3 == 0 && i % 7 == 0) {
			sum += i;
		}
	}
	return sqrt(sum);
}

int main58() {
	double x = fun58(n);
	printf("%lf\n", x);

	return 0;
}