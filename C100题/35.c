#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//请编写一个函数，用来删除字符串中的所有空格。

void fun35(char* ch) {
	int n = 0;
	char* p = ch;
	while (*p) {
		if (*p != ' ') {
			ch[n++] = *p;
		}
		p++;
	}
	ch[n] = 0;
}

int main35() {
	char ch[20] = "saf sg sdf";
	fun35(ch);
	printf("%s\n", ch);

	return 0;
}