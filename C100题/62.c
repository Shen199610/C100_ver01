#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 22

//请编写函数fun，该函数的功能是：统一一含字符串中单词的个数，作为函数值返回。
//一行字符串在主函数中输入，
//规定所有单词由小写字母组成，单词之间由若干个空格格开，一行的开始没有空格。

int fun62(char* ch) {
	int k = 0;
	while (*ch) {
		if (*ch != ' ') {
			k++;
		}
		ch++;
	}
	return k;
}

int main62() {
	char* ch = "fhie wjif iwfj wdn";
	int k = fun62(ch);
	printf("%d\n", k);
	return 0;
}