//* 3.请编写函数void fun(int x, int pp[], int* n), 它的功能是：
//求出能整除x且不是偶数的各整数，并按从小到大的顺序放在pp所指的数组中，
//这些除数的个数通过形参n返回。

#include<stdio.h>

void fun03(int x, int pp[], int* n) {
	int t = x;
	*n = 0;
	while (x) {
		if (((t / x)%2==1)&&(t % x==0)) {
			pp[*n] = x;
			*n+=1;
		}
		x--;
	}
}

int main03() {
	int x, pp[100], n;
	//scanf_s("%d", &x);
	//fun03(x, pp, &n);
	//for (int i = 0; i < n; i++)
	//{
	//	printf("%d ", pp[i]);
	//}

	printf("%lf\n", (double)(5 / 2));

	return 0;
}
