#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//请编写一个函数fun，它的功能是：将一个字符串转换为一个整数
//(不得调用C语言提供的将字符串转换为整数的函数)。

int fun24(char* ch,int n) {
	int num = 0;
	int x = 1;
	if (*ch == 45) {
		n -= 2;
		ch++;
		while (n >= 0) {
			num += (*(ch + n) - 48) * x;
			x *= 10;
			n -= 1;
		}
		num = 0 - num;
	}
	else {
		n -= 1;
		while (n >= 0) {
			num += (*(ch + n) - 48) * x;
			x *= 10;
			n -= 1;
		}
	}
	return num;

}

int main24() {
	char ch[100] = { 0 };
	scanf_s("%s", ch,100);
	int n = strlen(ch);
	printf("%d\n", fun24(ch,n));

	return 0;
}
