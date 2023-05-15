#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 50
//请编写函数fun，其功能是：
//将所有大于1小于整数m的非素数存入xx所指的数组中，非素数的个数通过k传回。

int fun51(int* xx) {
	int n = m;
	int k = 0;
	while (n--) {
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0) {
				xx[k] = n;
				k++;
				break;
			}
		}
	}
	return k;
}

int main51() {
	int xx[50] = { 0 };
	int k = fun51(xx);
	printf("%d\n",k);
	for (int i = 0; i < k; i++)
	{
		printf("%d\n", xx[i]);
	}

	return 0;
}


