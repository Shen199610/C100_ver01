#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 20

//请编写一个函数fun，它的功能是：
//计算并输出给定整数n的所有因子(不包括1与自身)之和。规定n的值不大于1000。

int fun63() {
	int sum = 0;
	for (int i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0) {
			sum = sum + i + n / i;
		}
	}
	return sum;
}

int main63() {
	printf("%d\n",fun63());
	return 0;
}