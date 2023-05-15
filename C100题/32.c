#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//请编写函数fun，其功能是：将s所指字符串中除了下标为奇数、
//同时ASCII值也为奇数的字符之外，其余的所有字符都删除，
//串中剩余字符所形成的一个新串放在t所指的一个数组中。

char* fun32(char* s, int n) {
	char t[100] = { 0 };
	int m = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0 && s[i] % 2 != 0) {
			t[m] = s[i];
			m++;
		}
	}
	return t;
}

int main32() {
	char* s = "abbba";
	int n = strlen(s);
	char* t = fun32(s, n);
	printf("%s\n", t);

	return 0;
}