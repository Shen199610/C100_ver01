#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//请编写一个函数float fun(double h), 函数的功能使对变量h中的值保留2位小树，
//并对第三位进行四舍五入(规定h中的值位正数)。

//C语言的截断，与强制转换
double fun16(double h) {
	return (int)(h * 100 + 0.5) / 100.0;
}

int main16() {
	double a;
	scanf_s("%lf", &a);
	printf("%lf\n%lf", a, fun16(a));
	return 0;
}