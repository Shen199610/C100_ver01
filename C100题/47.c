#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//���дһ������void fun(char *ss)���书��ʱ�����ַ���ss
//�������±�Ϊ����λ���ϵ���ĸת��Ϊ��д(��λ���ϲ�����ĸ����ת��)��

void fun47(char*ss) {
	int n = 0;
	while (*ss) {
		if (n % 2 == 0) {
			*ss -= 32;
		}
		n++;
		ss++;
	}
}

int main47() {
	char ss[100] = "asjfsadg";
	fun47(ss);
	printf("%s\n", ss);

	return 0;
}