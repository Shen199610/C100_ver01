#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 3

//���д����fun���书��ʱ�����㲢������ж���ʽ��ֵ�� 
//S=1/1*2+1/2*3+...+1/n(n+1) 

double fun70() {
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		double a = 1;
		for (int j = i; j <= i+1; j++)
		{
			a *= j;
		}
		sum += 1 / a;
	}
	return sum;
}

int main70() {
	printf("%lf\n", fun70());
	return 0;
}