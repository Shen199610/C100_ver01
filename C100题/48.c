#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//���д����fun���书���ǣ���������λ����������a, b
//�ϲ���һ����������c�С��ϲ��ķ�ʽ�ǣ���a����ʮλ�͸�λ��
//�η���c����ǧλ��ʮλ�ϣ�b����ʮλ�͸�λ�����η���c���İ�λ�͸�λ�ϡ�

void fun48(int *a,int*b,int*c) {
	int a1 = *a / 10;
	int a2 = *a % 10;
	int a3 = *b / 10;
	int a4 = *b % 10;
	*c = a1 * 1000 + a2 * 10 + a3 * 100 + a4;
}

int main48() {
	int a = 28;
	int b = 95;
	int c = 0;
	fun48(&a, &b, &c);
	printf("%d\n", c);

	return 0;
}