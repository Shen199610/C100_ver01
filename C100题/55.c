#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 5
#define n 5

//���д����fun���ú����Ĺ����ǣ���M��N�еĶ�ά�����е����ݣ�
//���е�˳�����ηŵ�һά�����У�
//һά���������ݵĸ���������β�n��ָ�Ĵ��浥Ԫ�С�

int* fun55(int ss[][n]) {
	int t[m*n] = { 0 };
	int x = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			t[x++] = ss[i][j];
		}
	}
	//for (int i = 0; i < m * n; i++)
	//{
	//	printf("%d ", t[i]);
	//}
	printf("\n");
	return t;
}

int main55() {
	int ss[m][n] = { 0 };
	int x = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			ss[i][j] = x++;
		}
	}
	int*t=fun55(ss);

	for (int i = 0; i < m * n; i++)
	{
		printf("%d ", t[i]);
	}
	return 0;
}