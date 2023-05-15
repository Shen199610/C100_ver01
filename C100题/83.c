#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 5

//假定输入的字符串中只包含字母和*号。请编写函数fun，
//它的功能使：将字符串尾部的*号全部删除，前面和中间的*号不删除。\

int fun83(char* ch,int k) {
	int kk = k;
	for (int i =k-1; i >=0; i--)
	{
		if (ch[i] != '*') {
			break;
		}
		kk--;
	}
	ch[kk] = 0;
}

int main83() {
	char ch[100] = "**fjja**fj***";
	int k = strlen(ch);
	fun83(ch,k);
	printf("%s\n", ch);
	return 0;
}