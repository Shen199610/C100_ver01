#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 4

//��дһ���������Ӵ����num���ַ������ҳ�һ�����һ���ַ�����
//��ͨ���β�ָ��max���ظô���ַ��

char* fun43(char ss[][100],int num,char* max) {
	for (int i = 1; i < num; i++)
	{
		if (strlen(ss[i]) > strlen(max)) {
			max=ss[i];
		}
	}
	return max;
}

int main43() {
	char ss[3][100];
	int i = 0;
	for (int i = 0; i < 3; i++)
	{
		gets(ss[i]);
	}
	char* max = ss[0];
	max = fun43(ss, 3, max);
	printf("%s\n", max);
	
	return 0;
}