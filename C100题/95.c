#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define n 3

//�ٶ�������ַ�����ֻ������ĸ��* �š����д����fun��
//���Ĺ����ǣ�ʹ�ַ�����ǰ��* �Ų��ö���n����������n����
//��ɾ�����ڵ�* �ţ������ڻ����n������ʲôҲ�������ַ����м��β����* �Ų�ɾ����

void fun95(char*ch,int k) {
	int a = 0;
	char* p = ch;
	char* pp = ch;
	int m = 0;

	while (*pp++ == '*') m++;
	if (m <= k) { 
		return;
	}
	else {
		while (*(p + (m - k))) {
			*ch++ = *(p++ + (m - k));
		}
	}
}

int main95() {
	char ch[100] = "**hdia**fkjsaf**";
	fun95(ch, n);
	printf("%s\n", ch);
	return 0;
}