#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 5
#define n 5

//假定输入的字符串中只包含字母和* 号。请编写函数fun，它的功能是：
//除了尾部的* 号之外，将字母串中其他* 号全部删除。
//形参p已指向字符串中最后的一个字母。不使用c的字符串函数。

int fun56(char* p) {
	*p = 0;
}

int main56() {
	char ss[100] = "dafedi*dna**";
	char* p = &ss[10];
	fun56(p);
	printf("%s\n", ss);

	return 0;
}
