#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 4

//���д����fun���ú����Ĺ������ƶ��ַ��������ݣ�
//�ƶ��Ĺ������£��ѵ�1����m���ַ���ƽ�Ƶ��ַ��������
//�ѵ�m��1�������ַ��Ƶ��ַ�����ǰ����

void fun40(char*ch,int n) {
	char p1[100] = { 0 };
	char* t = ch;
	for (int i = 0; i < m; i++)
	{
		p1[i] = ch[i];
	}
	for (int i = 0; i < m; i++)
	{
		ch[i] = ch[i + m];
	}
	for (int i = m; i < n; i++)
	{
		ch[i] = p1[i-m];
	}

}

int main40() {
	char ch[] = "abcdefghij";
	int n = strlen(ch);
	fun40(ch, n);
	printf("%s\n", ch);
	return 0;
}