#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 5

//�ٶ�������ַ�����ֻ������ĸ��* �š����д����fun�����Ĺ����ǣ�
//�����ַ���ǰ����* ��֮�⣬����������* ��ȫ��ɾ����
//�ڱ�д������ʱ������ʹ��C�����ṩ���ַ���������

void fun88(char* ch,int k) {
	char* p = ch;
	for (int i = 0; i < k; i++)
	{
		if (*p != '*') {
			while (*p) {
				*ch++ = *p++;
			}
			break;
		}
		p++;
	}
}

int main88() {
	char ch[100] = "**fjja**fj***";
	int k = strlen(ch);
	fun88(ch,k);
	printf("%s\n", ch);
	return 0;
}