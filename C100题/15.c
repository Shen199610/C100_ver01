#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//���дһ������unsigned fun(unsigned w), wʹһ������10���޷���������
//��wʹn(n��2)λ���������������w��n��1λ������Ϊ����ֵ���ء�

int fun15(unsigned int a) {
	return a / 10 % 10;
}

int main15() {
	unsigned int a;
	scanf_s("%u", &a);
	printf("%d\n",fun15(a));

	return 0;
}