#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//���д����fun���书���ǣ���s��ָ�ַ����г����±�Ϊ������
//ͬʱASCIIֵҲΪ�������ַ�֮�⣬����������ַ���ɾ����
//����ʣ���ַ����γɵ�һ���´�����t��ָ��һ�������С�

char* fun32(char* s, int n) {
	char t[100] = { 0 };
	int m = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0 && s[i] % 2 != 0) {
			t[m] = s[i];
			m++;
		}
	}
	return t;
}

int main32() {
	char* s = "abbba";
	int n = strlen(s);
	char* t = fun32(s, n);
	printf("%s\n", t);

	return 0;
}