#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//编写函数int fun(int lim, int aa[MAX]), 该函数的功能是求出小于或
//等于lim的所有素数并放在aa数组中，该函数返回所求的素数的个数。

int fun20(int m) {
	int n = 1;
	while (m) {
		for (int i = 2; i < m; i++)
		{
			if (m % i == 0) {
				break;
			}
			if (i == m-1) {
				printf("%d\n", m);
				n++;
			}
		}
		m--;
	}
	return n;
}

int main20() {
	int lim = 100;
	printf("%d\n", fun20(lim));
	return 0;
}