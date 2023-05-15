//编写函数fun, 功能是：根据以下公式计算s, 计算结果作为函数值返回；n通过形参传入。
//s = 1 + 1 / (1 + 2) + 1 / (1 + 2 + 3) + ....... + 1 
/// (1 + 2 + 3 + 4 + ...... + n)

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdio.h>

double fun08(int n) {
	double sum = 0;
	double sum2 = 0;

	for (int i = 0; i < n; i++)
	{
		double sum1 = 0;
		for (int j = 1; j < i+2; j++)
		{
			sum1 += j;
		}
		sum += 1 / sum1;
	}
	for (int i = 1; i < n+1; i++)
	{
		sum2 += i;
	}
	sum /= sum2;
	return sum;
}

int main08() {
	int n;
	scanf_s("%d", &n);
	double b = fun08(n);
	printf("%lf\n",b);
	return 0;
}