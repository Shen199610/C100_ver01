#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 2

//���д����fun�����Ĺ����Ǽ��㣺s=(ln(1)+ln(2)+ln(3)+...+ln(m))(0.5),s��Ϊ����ֵ����

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


