#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 3

//���д����fun���书��ʱ�����㲢������ж���ʽ��ֵ�� 
//sn = 1 + 1 / 1!+ 1 / 2!+ 1 / 3!+ 1 / 4!+ ... + 1 / n!

double fun68() {
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		double a = 1;
		for (int j = 1; j <= i; j++)
		{
			a *= j;
		}
		sum += 1 / a;
	}
	return sum+1;
}

int main68() {
	printf("%lf\n",fun68());
	return 0;
}