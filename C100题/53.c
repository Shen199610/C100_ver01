#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 50
#define n 3


//���д����fun, �ú����Ĺ����ǣ�ʵ��B = A + A����
//���Ѿ���A����A��ת�ã�����ھ���B�С���������main�����������

void fun53(int x1[][n]) {
	int x2[n][n] = { 0 };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			x2[i][j] = x1[i][j];
		}
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			int t = x1[i][j];
			x1[i][j] = x1[j][i];
			x1[j][i] = t;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			x1[i][j] += x2[i][j];
		}
	}
}

int main53() {
	time_t tm = time(NULL);
	srand((unsigned int)tm);
	int x1[n][n] = { 0 };
	int a = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			x1[i][j] = a++;
		}
	}

	fun53(x1);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", x1[i][j]);
		}
		putchar('\n');
	}

	return 0;
}