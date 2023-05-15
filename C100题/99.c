#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>



//请编写函数fun ，其功能是：计算并输出3到n之间所有素数的平方根之和。

double fun99(int n) {
	double sum = 0;
	while (n>=3) {
		int i = 2;
		for (i = 2; i < n; i++)
		{
			if (n % i == 0) break;
		}
		if (i = n) {
			sum += sqrt(1.0 / n);
		}
		n--;
	}
	return sum;
}