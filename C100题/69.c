#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define t 3

//���дһ������fun�����Ĺ���ʱ����Fibonacci�����д���t����С��һ������
//����ɺ������ء�����Fibonacci����F(n)�Ķ���Ϊ��
//F(0) = 0, F(1) = 1, F(n) = F(n - 1) + F(n - 2)

int fun69() {
	int a = 0;
	int b = 1;
	int c = 0;
	while (c < t) {
		a = b;
		c = a + b;
		b = c;
	}
	return c;
}

int main69() {
	printf("%d\n", fun69());
	return 0;
}