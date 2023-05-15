#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define t 3

//请编写一个函数fun，它的功能时：求Fibonacci数列中大于t的最小的一个数，
//结果由函数返回。其中Fibonacci数列F(n)的定义为：
//F(0) = 0, F(1) = 1, F(n) = F(n - 1) + F(n - 2)

int fun69() {
	int a = 0;
	int b = 1;
	int c = 0;
	while (c < t) {
		a = b;
		c = a + b;
		b = c;
	}
	return c;
}

int main69() {
	printf("%d\n", fun69());
	return 0;
}