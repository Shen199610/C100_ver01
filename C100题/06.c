//请编写一个函数void fun(char a[], char b[], int n), 
//其功能是：删除各字符串中指定下标的字符。其中，a指向原字符串，
//删除后的字符串存放在b所指的数组中，n中存放指定的下标。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdio.h>

void fun06(char* a, char* b, int n) {
	for (int i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	for (int i = n; i < strlen(a); i++)
	{
		b[i] = a[i + 1];
	}
}

int main06() {
	char a[100] = { 0 };
	char b[100] = { 0 };
	int n = 2;
	scanf_s("%s", a, 100);
	fun06(a, b, n);
	printf("%s\n", b);
	
	return 0;
}