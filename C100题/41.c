#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 2
#define n 3

//���д����fun���ú����Ĺ����ǣ�
//��M��N�еĶ�ά�����е��ַ����ݣ����е�˳�����ηŵ�һ���ַ����С�

void fun41(char ch[][3], char* str) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			*str++ = ch[j][i];
		}
	}
}

int main41() {
	char ch[m][n] = { 'a','b','c','d','e','f' };

	char str[10] = { 0 };
	fun41(ch, str);
	printf("%s\n", str);
	return 0;
}