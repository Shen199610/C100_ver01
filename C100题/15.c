#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//请编写一个函数unsigned fun(unsigned w), w使一个大于10的无符号整数，
//若w使n(n≥2)位的整数，则函数求出w后n－1位的数作为函数值返回。

int fun15(unsigned int a) {
	return a / 10 % 10;
}

int main15() {
	unsigned int a;
	scanf_s("%u", &a);
	printf("%d\n",fun15(a));

	return 0;
}