#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//�ٶ�������ַ�����ֻ������ĸ��*�š�
//���д����fun�����Ĺ����ǣ�ֻɾ���ַ���ǰ����β����*�ţ�
//������ĸ֮���*�Ŷ���ɾ�����β�n �������ַ����ĳ��ȣ�
//�β�h�������ַ�����ǰ��*�ŵĸ������β�e�������ַ���������*������
//�ڱ�дʱ����ʹ��C���Ը��ṩ���ַ���������

void fun45(char*ch,int m,int n,int len) {
	char* p = ch;
	int i = 0;
	for (i; i < len-m-n; i++)
	{
		ch[i] = p[i + m];
	}
	ch[i] = 0;
}

int main45() {
	char ch[100] = "**ndde*nfj**";
	int len = 12;
	fun45(ch, 2, 2, len);
	printf("%s\n", ch);

	return 0;
}
