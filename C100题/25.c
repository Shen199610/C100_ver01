#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//���дһ������fun�����Ĺ����ǣ��Ƚ������ַ����ĳ��ȣ�
//(���õ���C�����ṩ�����ַ������ȵĺ���)��
//�������ؽϳ����ַ������������ַ���������ͬ���򷵻ص�һ���ַ�����

char* fun25(char*ch1,char*ch2) {
	int m = 0;
	int n = 0;
	char* t1 = ch1;
	char* t2 = ch2;
	while (*ch1++)m++;
	while (*ch2++)n++;
	if (m >= n) {
		return t1;
	}
	else {
		return t2;
	}
}

int main25() {
	char ch1[100] = { 0 };
	char ch2[100] = { 0 };
	scanf_s("%s", ch1, 100);
	scanf_s("%s", ch2,100);
	printf("%s\n", fun25(ch1, ch2));

	return 0;
}