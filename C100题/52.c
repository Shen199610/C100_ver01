#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 50

//编写一个函数fun，它的功能是：实现两个字符串的连接
//(不使用库函数strcat)，即把p2所指的字符串连接到p1所指的字符串后。

int fun52(char* ch1, char* ch2) {
	while (*ch1) ch1++;
	while (*ch1++ = *ch2++);
}

int main52() {
	char ch1[100] = "abcd";
	char ch2[100] = "efgh";
	fun52(ch1, ch2);
	printf("%s\n", ch1);

	return 0;
}
