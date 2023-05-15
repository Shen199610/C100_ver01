#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//假定输入的字符串中只包含字母和* 号。请编写函数fun，
//它的功能是：将字符串中的前导* 号全部移到字符串的尾部。

void fun36(char* ch) {
	int n = 0;
	int i = 0;
	char* p = ch;
	while (*p) {
		if (*p == '*') {
			n++;
			p++;
			continue;
		}
		ch[i++] = *p;
		p++;
	}
	for (int j = 0; j < n; j++)
	{
		ch[i + j] = '*';
	}
}

int main36() {
	char ch[20] = "sa**sg**sdf";
	fun36(ch);
	printf("%s\n", ch);


	return 0;
}