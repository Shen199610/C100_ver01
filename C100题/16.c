#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//���дһ������float fun(double h), �����Ĺ���ʹ�Ա���h�е�ֵ����2λС����
//���Ե���λ������������(�涨h�е�ֵλ����)��

//C���ԵĽضϣ���ǿ��ת��
double fun16(double h) {
	return (int)(h * 100 + 0.5) / 100.0;
}

int main16() {
	double a;
	scanf_s("%lf", &a);
	printf("%lf\n%lf", a, fun16(a));
	return 0;
}