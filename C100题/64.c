#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 20

//请编写函数fun，其功能是：将s所指字符串中ASCII值为奇数的字符删除，
//串中剩余字符形成一个新串放在t所指的数组中。

void fun64(char*ch,char*t) {
	while (*ch) {
		if (*ch % 2 == 0) {
			*t = *ch;
			t++;
		}
		ch++;
	}
}

int main64() {
	char* ch = "abcdefg";
	char t[100] = { 0 };
	fun64(ch, t);
	printf("%s\n", t);
	return 0;
}