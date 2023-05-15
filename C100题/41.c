#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 2
#define n 3

//请编写函数fun，该函数的功能是：
//将M行N列的二维数组中的字符数据，按列的顺序依次放到一个字符串中。

void fun41(char ch[][3], char* str) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			*str++ = ch[j][i];
		}
	}
}

int main41() {
	char ch[m][n] = { 'a','b','c','d','e','f' };

	char str[10] = { 0 };
	fun41(ch, str);
	printf("%s\n", str);
	return 0;
}