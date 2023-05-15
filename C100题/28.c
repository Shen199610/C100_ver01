#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//请编写一个函数fun，它的功能是：找出一维整型数组元素中最大的值和它所在的下标，
//最大的值和它所在的下标通过形参传回。数组元素中的值已在主函数中赋予。
//主函数中x是数组名，n 
//是x中的数据个数，max存放最大值，index存放最大值所在元素的下标。

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