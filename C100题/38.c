#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//请编写函数fun，它的功能是：求出ss所指字符串中指定字符的个数，并返回此值。

int fun38(char* ch,char c) {
	int n = 0;
	while (*ch) {
		if (*ch == c)n++;
		ch++;
	}
	return n;
}

int main38() {
	char* ch = "udewbufulefjjejj";
	int n = fun38(ch,'j');
	printf("%d\n", n);
	return 0;
}