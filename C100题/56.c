#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 5
#define n 5

//�ٶ�������ַ�����ֻ������ĸ��* �š����д����fun�����Ĺ����ǣ�
//����β����* ��֮�⣬����ĸ��������* ��ȫ��ɾ����
//�β�p��ָ���ַ���������һ����ĸ����ʹ��c���ַ���������

int fun56(char* p) {
	*p = 0;
}

int main56() {
	char ss[100] = "dafedi*dna**";
	char* p = &ss[10];
	fun56(p);
	printf("%s\n", ss);

	return 0;
}
