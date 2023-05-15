#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//请编写函数fun，其功能是：将两个两位数的正整数a, b
//合并成一个整数放在c中。合并的方式是：将a数的十位和个位依
//次放在c数的千位和十位上，b数的十位和个位数依次放在c数的百位和个位上。

void fun48(int *a,int*b,int*c) {
	int a1 = *a / 10;
	int a2 = *a % 10;
	int a3 = *b / 10;
	int a4 = *b % 10;
	*c = a1 * 1000 + a2 * 10 + a3 * 100 + a4;
}

int main48() {
	int a = 28;
	int b = 95;
	int c = 0;
	fun48(&a, &b, &c);
	printf("%d\n", c);

	return 0;
}