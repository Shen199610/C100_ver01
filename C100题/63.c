#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 20

//���дһ������fun�����Ĺ����ǣ�
//���㲢�����������n����������(������1������)֮�͡��涨n��ֵ������1000��

int fun63() {
	int sum = 0;
	for (int i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0) {
			sum = sum + i + n / i;
		}
	}
	return sum;
}

int main63() {
	printf("%d\n",fun63());
	return 0;
}