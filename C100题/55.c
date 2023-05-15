#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 5
#define n 5

//请编写函数fun，该函数的功能是：将M行N列的二维数组中的数据，
//按行的顺序依次放到一维数组中，
//一维数组中数据的个数存放在形参n所指的储存单元中。

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