#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//请编写函数fun，其功能是：将s所指字符串中下标位偶数同时ASCII值
// 为奇数的字符删除，
//s中剩余的字符形成的新串放在t所指的数组中。

char* fun49(char* s,char*t) {
	t = s;
	int n = 0;
	while (*s) {
		if (n % 2 == 0 || *s % 2 == 0) {
			*t = *s;
			t++;
			s++;
			n++;
			continue;
		}
		n++;
		s++;
	}
	*t = 0;
	return t;
}

int main49() {
	char s[100] = "badcc";
	char* t=s;
	fun49(s,t);
	printf("%s\n", t);
	return 0;
}