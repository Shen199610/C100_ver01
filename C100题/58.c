#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 5
#define n 22

//��д���������Ĺ����ǣ���n����(������n)
//ͬʱ�ܱ�3��7������������Ȼ��֮�͵�ƽ����s������Ϊ����ֵ���ء�

double fun58(int x) {
	int sum = 0;
	for (int i = 1; i < x; i++)
	{
		if (i % 3 == 0 && i % 7 == 0) {
			sum += i;
		}
	}
	return sqrt(sum);
}

int main58() {
	double x = fun58(n);
	printf("%lf\n", x);

	return 0;
}