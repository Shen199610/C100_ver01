#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 3

//�ٶ�������ַ�����ֻ������ĸ��* �ţ����д����fun��
//���Ĺ����ǣ������ַ���ǰ����β����* ��֮�⣬����������* ��ȫ��ɾ����
//�β�h��ָ���ַ�����һ���ַ���
//�β�p��ָ���ַ��������һ����ĸ���ڱ�д����ʱ������ʹ��C�����ṩ���ַ���������

void fun73(char*h,char*p,int x) {
	while (h <= p) {
		if (*h != '*') {
			char* pp = h;
			while (pp <= p) {
				if (*pp != '*') {
					*h++ = *pp;
				}
				pp++;
			}
			break;
		}
		else {
			h++;
			continue;
		}
	}
	for (int i = 0; i < x; i++)
	{
		*h++ = '*';
	}
	*h = 0;
}

int main73() {
	char h[] = "**cj**tfh**";
	char* p = &h[8];
	fun73(h, p, 2);//2��ָβ��������*
	printf("%s\n", h);

	return 0;
}