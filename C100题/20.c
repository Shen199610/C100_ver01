#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//��д����int fun(int lim, int aa[MAX]), �ú����Ĺ��������С�ڻ�
//����lim����������������aa�����У��ú�����������������ĸ�����

int fun20(int m) {
	int n = 1;
	while (m) {
		for (int i = 2; i < m; i++)
		{
			if (m % i == 0) {
				break;
			}
			if (i == m-1) {
				printf("%d\n", m);
				n++;
			}
		}
		m--;
	}
	return n;
}

int main20() {
	int lim = 100;
	printf("%d\n", fun20(lim));
	return 0;
}