#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//假定输入的字符串中只包含字母和* 号。请编写函数fun，
//它的功能是：使字符串中尾部的* 号不得多于n个；若多于n个，则删除多于的* 号；
//若少于或等于n个，则什么也不做，字符串中间和前面的* 号不删除。



void fun33(char* ch, int len, int n) {
	int m = 0;
	while (ch[len - 1] == '*') {
		m++;
		len--;
	}
	*(ch + len + (m - n)) = '\0';
}

int main33() {
	char ch[20] = "nihaoshabib*****";
	int len = strlen(ch);
	int n = 3;
	fun33(ch, len, n);
	printf("%s\n", ch);

	return 0;
}