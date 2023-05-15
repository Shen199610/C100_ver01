#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 2

//请编写函数fun，它的功能是计算：s=(ln(1)+ln(2)+ln(3)+...+ln(m))(0.5),s作为函数值返回

double fun92() {
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += log(n);
	}
	sum = pow(sum, 0.5);
}

int main92() {
	double sum = fun92();
	printf("%lf\n", sum);
	return 0;
}


