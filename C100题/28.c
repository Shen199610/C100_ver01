#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//���дһ������fun�����Ĺ����ǣ��ҳ�һά��������Ԫ��������ֵ�������ڵ��±꣬
//����ֵ�������ڵ��±�ͨ���βδ��ء�����Ԫ���е�ֵ�����������и��衣
//��������x����������n 
//��x�е����ݸ�����max������ֵ��index������ֵ����Ԫ�ص��±ꡣ

void fun28(int* ind, int* max, int x[],int n) {
	*max = x[0];
	
	for (int i = 1; i < n; i++)
	{
		if (x[i] > *max) {
			*max = x[i];
			*ind = i;
		}
	}
}

int main28() {
	int x[] = { 5,6,7,9,1,8,5 };
	int n = sizeof(x) / sizeof(x[0]);
	int index, max;
	fun28(&index, &max, x, n);
	printf("%d,%d\n", index, max);

	return 0;
}