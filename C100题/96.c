#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define n 9

//请编写函数fun，其功能使：
//计算并输出给定数组(长度为9)中每相邻两个元素之平均值的平方根之和

double fun96(int* s) {
	double sum = 0;
	for (int i = 0; i < n-1; i++)
	{
		sum += sqrt((s[i] + s[i + 1]) / 2);
	}
	return sum;
}