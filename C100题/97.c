#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define n 9

//请编写函数fun，其功能是：计算并输出下列多项式值：
//s = 1 + 1 / (1 + 2) + 1 / (1 + 2 + 3) + ..1 / (1 + 2 + 3... + 50)

double fun97() {
	double sum = 0;
	int k = 0;
	for (int i = 1; i <= 50; i++)
	{
		k += i;
		sum += 1 / (k);
	}
	return sum;
}