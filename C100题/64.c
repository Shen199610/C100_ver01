#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 20

//���д����fun���书���ǣ���s��ָ�ַ�����ASCIIֵΪ�������ַ�ɾ����
//����ʣ���ַ��γ�һ���´�����t��ָ�������С�

void fun64(char*ch,char*t) {
	while (*ch) {
		if (*ch % 2 == 0) {
			*t = *ch;
			t++;
		}
		ch++;
	}
}

int main64() {
	char* ch = "abcdefg";
	char t[100] = { 0 };
	fun64(ch, t);
	printf("%s\n", t);
	return 0;
}