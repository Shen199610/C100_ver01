//���дһ������void fun(char* tt, int pp[]), ͳ����tt�ַ�
//��"a"��"z"26����ĸ���Գ��ֵĴ����������η���pp��ָ�������С�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void fun04(char* tt, int pp[]) {
	while (*tt) {
		pp[*tt - 'a']++;
		tt++;
	}
}

int main04() {
	int pp[26] = { 0 };
	char tt[100] = { 0 };
	scanf_s("%s", tt,100);
	fun04(tt, pp);
	for (int i = 0; i < 26; i++)
	{
		printf("%c�Ĵ�����%d\n", i + 'a', pp[i]);
	}

	return 0;
}