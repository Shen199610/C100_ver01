#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 3


//���д����fun���书���ǣ�
//��s��ָ�ַ������±�Ϊż�����ַ�ɾ��������ʣ���ַ��γ��´�����t��ָ�����С�

void fun72(char* ch, char* t) {
	int i = 0;
	while (*ch) {
		if (i++ % 2 == 0) {
			*t++ = *ch;
		}
		ch++;
	}
}

int main72() {
	char ch[100] = "abcdefg";
	char t[100] = { 0 };
	fun72(ch, t);
	printf("%s\n", t);
	return 0;
}