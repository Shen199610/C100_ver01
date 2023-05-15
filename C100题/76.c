#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 5

//请编写函数fun，其功能时：计算并输出当x < 0.97时下列多项式的值，
//	直到｜Sn - S(n - 1)｜ < 0.000001为止。
//	Sn = 1 + 0.5x + 0.5(0.5 - 1) / 2!x(2) + ... + 
//	0.5(0.5 - 1)(0.5 - 2).....(0.5 - n + 1) / n!x(n)

double fun76(double x) {
	double s1 = 1.5;
	double s0 = 1;
	int k = 2;
	int sum = 1;
	double xx = x;
	double kk = 0.5;
	while ((s1 - s0) > 0.000001) {
		sum *= k;
		xx *= x;
		s0 = s1;
		kk *= (0.5 - k + 1);
		s1 = s1 + (kk / sum)*xx;
		k++;
	}
	return s1;
}

int main76() {
	printf("%lf\n", fun76(0.2));
	return 0;
}