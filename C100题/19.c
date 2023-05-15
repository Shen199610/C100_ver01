#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//编写函数fun, 该函数的功能是：从字符中删除指定的字符，
//同一字母的大、小写按不同字符处理。

char* fun19(char*a,char b) {
	char aa[100] = { 0 };
	int i = 0;
	while (*a) {
		if (*a != b) {
			aa[i] = *a;
			i++;
		}
		a++;
	}
	return aa;
}

int main19() {
	char a[] = "abcdefg";
	char b = 99;
	char*aa = fun19(a,b);
	printf("%s\n", aa);
	return 0;

}