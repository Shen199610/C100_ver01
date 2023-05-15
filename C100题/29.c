#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//请编写一个函数fun，它的功能是：将ss所指字符串中所有下标为奇数位置上的
//字母转换为大写(若该位置上不是字母，则不转换)。

int fun29(char*ss) {
	int n = 0;
	while (*ss) {
		if (97 <= *ss < 123) {
			*ss -= 32;
		}
		ss += 2;
	}
	return 0;
}

int main29() {
	char ss[100] = "djaAASDJnjsd";
	fun29(ss);
	printf("%s\n", ss);
	return 0;
}