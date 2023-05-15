#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define n 3

//假定输入的字符串中只包含字母和* 号。请编写函数fun，
//它的功能是：使字符串的前导* 号不得多于n个；若多于n个，
//则删除多于的* 号；若少于或等于n个，则什么也不做。字符串中间和尾部的* 号不删除。

void fun95(char*ch,int k) {
	int a = 0;
	char* p = ch;
	char* pp = ch;
	int m = 0;

	while (*pp++ == '*') m++;
	if (m <= k) { 
		return;
	}
	else {
		while (*(p + (m - k))) {
			*ch++ = *(p++ + (m - k));
		}
	}
}

int main95() {
	char ch[100] = "**hdia**fkjsaf**";
	fun95(ch, n);
	printf("%s\n", ch);
	return 0;
}