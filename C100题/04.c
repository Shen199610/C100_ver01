//请编写一个函数void fun(char* tt, int pp[]), 统计在tt字符
//中"a"到"z"26各字母各自出现的次数，并依次放在pp所指的数组中。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void fun04(char* tt, int pp[]) {
	while (*tt) {
		pp[*tt - 'a']++;
		tt++;
	}
}

int main04() {
	int pp[26] = { 0 };
	char tt[100] = { 0 };
	scanf_s("%s", tt,100);
	fun04(tt, pp);
	for (int i = 0; i < 26; i++)
	{
		printf("%c的次数是%d\n", i + 'a', pp[i]);
	}

	return 0;
}