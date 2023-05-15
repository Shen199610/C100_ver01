#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//请编写函数fun，该函数的功能是：判断字符串是否为回文 ? 
//若是则函数返回1，主函数中输出YES，否则返回0，
//主函数中输出NO。回文是指顺读和倒读都是一样的字符串。

int fun23(char* ch, int n) {
	n = n - 1;
	while (n>0) {
		if (*ch != *(ch + n)){
			return 0;
		}
		n = -2;
		ch++;
	}
	return 1;
}

int main23() {
	char ch[100] = { 0 };
	scanf_s("%s", ch,100);
	int n = strlen(ch);
	printf("%s,%d\n", ch,n);
	printf("%d",fun23(ch, n));

	return 0;
}