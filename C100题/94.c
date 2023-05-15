#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 2

//假定输入的字符串中只包含字母和* 号。请编写函数fun，
//它的功能是：除了字符串前导的* 号之外，将串中其他* 号全部删除。
//在编写函数亚时，不得使用C语言提供的字符串函数。

void fun94(char*s) {
	char* p = s;
	while (*p) 
	{
		if (*p != '*') 
		{
			while (*p!='0')
			{
				if (*p != '*') {
					*s++ = *p;
				}
				p++;
			}
			break;
		}
		p++;
		s++;
	}
	s = 0;
}

int main94() {
	char s[100] = "***ddnf**fdnj**";
	fun94(s);
	printf("%s\n", s);
	return 0;
}































