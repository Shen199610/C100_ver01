#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define N 9
//���д����fun���ú����Ĺ����ǣ��ƶ�һά�����е����ݣ�����������n��������
//Ҫ����±��0��p(pС�ڵ���n��1)������Ԫ��ƽ�Ƶ���������

void fun39(int* t,int p) {
	int t1[10] = { 0 };
	for (int i = 0; i < p; i++)
	{
		t1[i] = t[i];
	}
	for (int i = 0; i < N-p; i++)
	{
		t[i] = t[p + i];
	}
	for (int i = N - p; i < N; i++)
	{
		t[i] = t1[i - (N - p)];
	}
}

int main39() {
	int t[N] = { 1,2,3,4,5,6,7,8,9 };
	int p = 4;
	fun39(t,p);
	for (int i = 0; i < N; i++)
	{
		printf("%d\n", t[i]);
	}
	return 0;
}