#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 4

//编写一个函数，该函数可以统计一个长度为2的字符串在另一个字符串中出现的次数。

int fun44(char*ch1,char*ch2) {
	int n = 0;
	while (*ch1) {
		if (*ch1 == *ch2) {
			ch1++;
			ch2++;
			if (*ch1 = *ch2) {
				n++;
				ch2--;
			}
			else {
				ch2--;
			}
		}
		else {
			ch1++;
		}
	}
	return n;
}

int main44() {
	char ch1[100];
	char ch2[10];
	gets(ch1);
	gets(ch2);
	int n = fun44(ch1, ch2);
	printf("%d\n", n);
	return 0;
}