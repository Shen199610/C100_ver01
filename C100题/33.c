#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//�ٶ�������ַ�����ֻ������ĸ��* �š����д����fun��
//���Ĺ����ǣ�ʹ�ַ�����β����* �Ų��ö���n����������n������ɾ�����ڵ�* �ţ�
//�����ڻ����n������ʲôҲ�������ַ����м��ǰ���* �Ų�ɾ����



void fun33(char* ch, int len, int n) {
	int m = 0;
	while (ch[len - 1] == '*') {
		m++;
		len--;
	}
	*(ch + len + (m - n)) = '\0';
}

int main33() {
	char ch[20] = "nihaoshabib*****";
	int len = strlen(ch);
	int n = 3;
	fun33(ch, len, n);
	printf("%s\n", ch);

	return 0;
}