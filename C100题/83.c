#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 5

//�ٶ�������ַ�����ֻ������ĸ��*�š����д����fun��
//���Ĺ���ʹ�����ַ���β����*��ȫ��ɾ����ǰ����м��*�Ų�ɾ����\

int fun83(char* ch,int k) {
	int kk = k;
	for (int i =k-1; i >=0; i--)
	{
		if (ch[i] != '*') {
			break;
		}
		kk--;
	}
	ch[kk] = 0;
}

int main83() {
	char ch[100] = "**fjja**fj***";
	int k = strlen(ch);
	fun83(ch,k);
	printf("%s\n", ch);
	return 0;
}