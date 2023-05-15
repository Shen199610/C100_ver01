#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 4

//请编写函数fun，该函数的功能是移动字符串中内容，
//移动的规则如下：把第1到第m个字符，平移到字符串的最后，
//把第m＋1到最后的字符移到字符串的前部。

void fun40(char*ch,int n) {
	char p1[100] = { 0 };
	char* t = ch;
	for (int i = 0; i < m; i++)
	{
		p1[i] = ch[i];
	}
	for (int i = 0; i < m; i++)
	{
		ch[i] = ch[i + m];
	}
	for (int i = m; i < n; i++)
	{
		ch[i] = p1[i-m];
	}

}

int main40() {
	char ch[] = "abcdefghij";
	int n = strlen(ch);
	fun40(ch, n);
	printf("%s\n", ch);
	return 0;
}