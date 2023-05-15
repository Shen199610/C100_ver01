#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 10

//请编写函数fun，计算并输出给定10个数的方差

double fun84(int* s) {
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += s[i];
	}
	double ave = sum / n;
	double s2 = 0;
	for (int i = 0; i < n; i++)
	{
		s2 += pow((s[i] - ave), 2)/n;
	}
	return s2;
}

int main84() {
	int s[n] = { 1,2,3,4,5,6,7,8,9,10 };
	double x = fun84(s);
	printf("%lf\n", x);
	return 0;
}