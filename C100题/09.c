//编写一个函数fun，它的功能是：根据以下公式求P的值，
//结果由函数值带回。m与n为两个正整数，且要求m > n。 p = m!/ n!(m - n)!

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdio.h>

double fun09(int m, int n) {
	double re = 0; 
	double re1= 1;
	double re2 = 1;
	double re3 = 1;
	int a = m - n;
	while (m) {
		re1 *= m;
		m--;
	}
	while (n) {
		re2 *= n;
		n--;
	}
	while (a) {
		re3 *= a;
		a--;
	}
	return re1/(re2*re3);
}

int main09() {
	int m, n;
	scanf_s("%d,%d", &m, &n);
	printf("%lf\n", fun09(m,n));
	return 0;
}