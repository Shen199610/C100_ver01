#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//�ٶ�������ַ�����ֻ������ĸ��* �š����д����fun��
//���Ĺ����ǣ����ַ����е�ǰ��* ��ȫ���Ƶ��ַ�����β����

void fun36(char* ch) {
	int n = 0;
	int i = 0;
	char* p = ch;
	while (*p) {
		if (*p == '*') {
			n++;
			p++;
			continue;
		}
		ch[i++] = *p;
		p++;
	}
	for (int j = 0; j < n; j++)
	{
		ch[i + j] = '*';
	}
}

int main36() {
	char ch[20] = "sa**sg**sdf";
	fun36(ch);
	printf("%s\n", ch);


	return 0;
}