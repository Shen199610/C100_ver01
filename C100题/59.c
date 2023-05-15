#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 22

//请别写函数fun，该函数的功能是：
//将放在字符串数组中的M个字符串(每串的长度不超过N)，按顺序合并组成一个新的字符串。

void fun59(char ss[][n], char* a) {
	int k = 0;
	for (int i = 0; i <m ; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (*(*(ss + i) + j)) {
				a[k++] = *(*(ss + i) + j);
			}
			else {
				break;
			}
		}
	}
	a[k] = 0;
}

int main59() {
	char ss[][n] = {
		"nihao",
		"shabi",
		"shabi"
	};
	char s[m*n] = {0};
	printf("%s\n",s);

	return 0;
}