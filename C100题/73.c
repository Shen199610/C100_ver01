#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 3

//假定输入的字符串中只包含字母和* 号，请编写函数fun，
//它的功能是：除了字符串前导和尾部的* 号之外，将串中其他* 号全部删除。
//形参h已指向字符串第一个字符，
//形参p已指向字符串中最后一个字母。在编写程序时，不得使用C语言提供的字符串函数。

void fun73(char*h,char*p,int x) {
	while (h <= p) {
		if (*h != '*') {
			char* pp = h;
			while (pp <= p) {
				if (*pp != '*') {
					*h++ = *pp;
				}
				pp++;
			}
			break;
		}
		else {
			h++;
			continue;
		}
	}
	for (int i = 0; i < x; i++)
	{
		*h++ = '*';
	}
	*h = 0;
}

int main73() {
	char h[] = "**cj**tfh**";
	char* p = &h[8];
	fun73(h, p, 2);//2是指尾部的两个*
	printf("%s\n", h);

	return 0;
}