#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 20

//�ٶ�������ַ�����ֻ������ĸ��* �š����д����fun�����Ĺ����ǣ�
//ɾ���ַ���������* �š��ڱ�д����ʱ������ʹ��C�����ṩ���ַ���������

void fun66(char* ch) {
	char* p = ch;
	while (*p) {
		if (*p != '*') {
			*ch = *(p);
			ch++;
		}
		p++;
	}
	*ch = 0;
}

int main66() {
	char ch[100] = "f***a***fbef**fn";
	fun66(ch);
	printf("%s\n", ch);
	return 0;
}