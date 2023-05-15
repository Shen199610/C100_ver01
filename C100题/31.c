#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//请编写函数fun，其功能是：将s所指字符串中除了下标为偶数、
//同时ASCII值也为偶数的字符外，其余的全都删除；
//串中剩余字符所形成的一个新串放在t所指的一个数组中。

char* fun31(char* s,int n) {
	char t[100] = {0};
	int m = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0 && s[i] % 2 == 0) {
			t[m] = s[i];
			m++;
		}
	}
	return t;
}

int main31() {
	char* s = "ubbb";
	int n = strlen(s);
	char* t = fun31(s, n);
	printf("%s\n", t);

	return 0;
}
