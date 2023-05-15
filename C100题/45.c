#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//假定输入的字符串中只包含字母和*号。
//请编写函数fun，它的功能是：只删除字符串前导和尾部的*号，
//串中字母之间的*号都不删除。形参n 给出了字符串的长度，
//形参h给出了字符串中前导*号的个数，形参e给出了字符串中最后的*个数。
//在编写时不得使用C语言给提供得字符串函数。

void fun45(char*ch,int m,int n,int len) {
	char* p = ch;
	int i = 0;
	for (i; i < len-m-n; i++)
	{
		ch[i] = p[i + m];
	}
	ch[i] = 0;
}

int main45() {
	char ch[100] = "**ndde*nfj**";
	int len = 12;
	fun45(ch, 2, 2, len);
	printf("%s\n", ch);

	return 0;
}
