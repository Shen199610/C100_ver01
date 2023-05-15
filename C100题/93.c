#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 2

//请编写函数fun，它的功能是计算下列级数和，和值由函数值返回。
//s = 1 + x + x(2) / 2!+ x(3) / 3!+ ...x(n) / n!

double fun93(int x) {
	double s = 1;
	int a = 1;
	for (int i = 1; i <= n; i++)
	{
		a *= i;
		s += pow(x, i) / a;
	}
	return s;
}

int main93() {
	int x = 3;
	double s = fun93(x);
	printf("%lf\n", s);
	return 0;
}