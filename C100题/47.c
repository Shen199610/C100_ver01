#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//请编写一个函数void fun(char *ss)，其功能时：将字符串ss
//中所有下标为奇数位置上的字母转换为大写(若位置上不是字母，则不转换)。

void fun47(char*ss) {
	int n = 0;
	while (*ss) {
		if (n % 2 == 0) {
			*ss -= 32;
		}
		n++;
		ss++;
	}
}

int main47() {
	char ss[100] = "asjfsadg";
	fun47(ss);
	printf("%s\n", ss);

	return 0;
}