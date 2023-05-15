#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 5

//假定输入的字符串中只包含字母和* 号。请编写函数fun，它的功能是：
//除了字符串前导的* 号之外，将串中其他* 号全部删除。
//在编写函数亚时，不得使用C语言提供的字符串函数。

void fun88(char* ch,int k) {
	char* p = ch;
	for (int i = 0; i < k; i++)
	{
		if (*p != '*') {
			while (*p) {
				*ch++ = *p++;
			}
			break;
		}
		p++;
	}
}

int main88() {
	char ch[100] = "**fjja**fj***";
	int k = strlen(ch);
	fun88(ch,k);
	printf("%s\n", ch);
	return 0;
}