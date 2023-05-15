#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 4

//编写一个函数，从传入的num个字符串中找出一个最长的一个字符串，
//并通过形参指针max传回该串地址。

char* fun43(char ss[][100],int num,char* max) {
	for (int i = 1; i < num; i++)
	{
		if (strlen(ss[i]) > strlen(max)) {
			max=ss[i];
		}
	}
	return max;
}

int main43() {
	char ss[3][100];
	int i = 0;
	for (int i = 0; i < 3; i++)
	{
		gets(ss[i]);
	}
	char* max = ss[0];
	max = fun43(ss, 3, max);
	printf("%s\n", max);
	
	return 0;
}