#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//���д����fun���书���ǣ���s��ָ�ַ������±�λż��ͬʱASCIIֵ
// Ϊ�������ַ�ɾ����
//s��ʣ����ַ��γɵ��´�����t��ָ�������С�

char* fun49(char* s,char*t) {
	t = s;
	int n = 0;
	while (*s) {
		if (n % 2 == 0 || *s % 2 == 0) {
			*t = *s;
			t++;
			s++;
			n++;
			continue;
		}
		n++;
		s++;
	}
	*t = 0;
	return t;
}

int main49() {
	char s[100] = "badcc";
	char* t=s;
	fun49(s,t);
	printf("%s\n", t);
	return 0;
}