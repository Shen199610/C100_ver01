#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define n 9

//���д����fun���书��ʹ��
//���㲢�����������(����Ϊ9)��ÿ��������Ԫ��֮ƽ��ֵ��ƽ����֮��

double fun96(int* s) {
	double sum = 0;
	for (int i = 0; i < n-1; i++)
	{
		sum += sqrt((s[i] + s[i + 1]) / 2);
	}
	return sum;
}