#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 20

//假定输入的字符串中只包含字母和* 号。请编写函数fun，它的功能是：
//删除字符串中所有* 号。在编写函数时，不得使用C语言提供的字符串函数。

void fun66(char* ch) {
	char* p = ch;
	while (*p) {
		if (*p != '*') {
			*ch = *(p);
			ch++;
		}
		p++;
	}
	*ch = 0;
}

int main66() {
	char ch[100] = "f***a***fbef**fn";
	fun66(ch);
	printf("%s\n", ch);
	return 0;
}