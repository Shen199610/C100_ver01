//* 2.请编写函数fun，它的功能是：求出1到100
//之内能被7或者11整除，但不能同时被7和11整除的所有整数，
//并将他们放在a所指的数组中，通过n返回这些数的个数。

#include<stdio.h>
int fun02(int a[]) {
	int j = 0;
	for (int i = 1; i <= 100; i++)
	{
		if ((i % 7 == 0 || i % 11 == 0) && !(i % 7 == 0 && i % 11 == 0)) {
			a[j] = i;
			j++;
		}
	}
	return j;
}


int main02() {
	int a[100] = { 0 };
	int num = fun02(a);
	for (int i = 0; i < num; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}