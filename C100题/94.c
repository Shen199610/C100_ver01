#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 2

//�ٶ�������ַ�����ֻ������ĸ��* �š����д����fun��
//���Ĺ����ǣ������ַ���ǰ����* ��֮�⣬����������* ��ȫ��ɾ����
//�ڱ�д������ʱ������ʹ��C�����ṩ���ַ���������

void fun94(char*s) {
	char* p = s;
	while (*p) 
	{
		if (*p != '*') 
		{
			while (*p!='0')
			{
				if (*p != '*') {
					*s++ = *p;
				}
				p++;
			}
			break;
		}
		p++;
		s++;
	}
	s = 0;
}

int main94() {
	char s[100] = "***ddnf**fdnj**";
	fun94(s);
	printf("%s\n", s);
	return 0;
}































