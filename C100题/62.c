#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 22

//���д����fun���ú����Ĺ����ǣ�ͳһһ���ַ����е��ʵĸ�������Ϊ����ֵ���ء�
//һ���ַ����������������룬
//�涨���е�����Сд��ĸ��ɣ�����֮�������ɸ��ո�񿪣�һ�еĿ�ʼû�пո�

int fun62(char* ch) {
	int k = 0;
	while (*ch) {
		if (*ch != ' ') {
			k++;
		}
		ch++;
	}
	return k;
}

int main62() {
	char* ch = "fhie wjif iwfj wdn";
	int k = fun62(ch);
	printf("%d\n", k);
	return 0;
}