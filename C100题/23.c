#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//���д����fun���ú����Ĺ����ǣ��ж��ַ����Ƿ�Ϊ���� ? 
//������������1�������������YES�����򷵻�0��
//�����������NO��������ָ˳���͵�������һ�����ַ�����

int fun23(char* ch, int n) {
	n = n - 1;
	while (n>0) {
		if (*ch != *(ch + n)){
			return 0;
		}
		n = -2;
		ch++;
	}
	return 1;
}

int main23() {
	char ch[100] = { 0 };
	scanf_s("%s", ch,100);
	int n = strlen(ch);
	printf("%s,%d\n", ch,n);
	printf("%d",fun23(ch, n));

	return 0;
}