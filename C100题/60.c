#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 22

//请编写函数fun，该函数的功能是：删去一维数组中所有相同的数，使之只剩一个。
//数组中的数已按由小到大的顺序排列，函数返回删除后数组中数据的个数。

int fun60(int s[],int t[],int k) {
	int a = 0;
	for (int i = 0; i < k; i++)
	{
		int k = 0;
		for (int j = 0; j <= a; j++)
		{
			if (s[i] == t[j]) {
				break;
			}
			k++;
		}
		if (k == (a + 1)) {
			t[i] = s[i];
			a++;
		}
	}
	return a;
}

int main60() {
	int s[100] = { 2,5,6,3,4,5,3,6,5 };
	int t[100] = { 0 };
	int a = fun60(s,t,9);
	printf("%d\n", a);
	for (int i = 0; i < a; i++)
	{
		printf("%d\n", t[i]);
	}
	return 0;
}