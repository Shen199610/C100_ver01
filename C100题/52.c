#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 50

//��дһ������fun�����Ĺ����ǣ�ʵ�������ַ���������
//(��ʹ�ÿ⺯��strcat)������p2��ָ���ַ������ӵ�p1��ָ���ַ�����

int fun52(char* ch1, char* ch2) {
	while (*ch1) ch1++;
	while (*ch1++ = *ch2++);
}

int main52() {
	char ch1[100] = "abcd";
	char ch2[100] = "efgh";
	fun52(ch1, ch2);
	printf("%s\n", ch1);

	return 0;
}
