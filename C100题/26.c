#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//���дһ������fun�����Ĺ����ǣ��������¹�ʽ��X��ֵ(Ҫ�����㾫��0.0005��
//	��ĳ��С��0.0005ʱֹͣ����)��
//X / 2 = 1 + 1 / 3 + 1��2 / 3��5 + 1��2��3 / 3��5��7 + 1��2��3��4 
/// 3��5��7��9 + ... + 1��2��3��...��n / 3��5��7��(2n + 1)
//�������к�������뾫��0.0005����������Ϊ3.14...��

double fun26(double err) {
	double pi = 1, a = 1;
	for (int i = 1; a >=err; i++)
	{
		a = a * i / (2 * i + 1);
		pi = pi + a;
	}
	return 2 * pi;
}

int main26() {
	printf("%lf", fun26(0.00005));
	return 0;
}