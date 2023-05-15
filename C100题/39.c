#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define N 9
//请编写函数fun，该函数的功能是：移动一维数组中的内容，若数组中由n个整数，
//要求把下标从0到p(p小于等于n－1)的数组元素平移到数组的最后。

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