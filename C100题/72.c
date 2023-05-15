#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 3


//请编写函数fun，其功能是：
//将s所指字符串中下标为偶数的字符删除，串中剩余字符形成新串放在t所指数组中。

void fun72(char* ch, char* t) {
	int i = 0;
	while (*ch) {
		if (i++ % 2 == 0) {
			*t++ = *ch;
		}
		ch++;
	}
}

int main72() {
	char ch[100] = "abcdefg";
	char t[100] = { 0 };
	fun72(ch, t);
	printf("%s\n", t);
	return 0;
}