#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 1

//请编写函数fun，其功能是：
//计算并输出下列多项式值:
//Sn = (1 - 1 / 2) + (1 / 3 - 1 / 4) + ... + (1 / (2n - 1)1 / 2n).

double fun90() {
	double sn = 0;
	for (int i = 1; i <= n; i++)
	{
		sn += (1.0 / (2*i-1)-1.0/(2*i));
	}
	return sn;
}

int main90() {
	double sn = fun90();
	printf("%lf\n", sn);

	return 0;
}