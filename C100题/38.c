#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//���д����fun�����Ĺ����ǣ����ss��ָ�ַ�����ָ���ַ��ĸ����������ش�ֵ��

int fun38(char* ch,char c) {
	int n = 0;
	while (*ch) {
		if (*ch == c)n++;
		ch++;
	}
	return n;
}

int main38() {
	char* ch = "udewbufulefjjejj";
	int n = fun38(ch,'j');
	printf("%d\n", n);
	return 0;
}