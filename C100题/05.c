//���дһ������void fun(int m, int k, int xx[]), 
//�ú����Ĺ����ǣ�����������m�ҽ���m��k����������xx��ָ�������С�

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void fun05(int m, int k, int xx[]) {
	int i = 0;
	int j = 1;

	while (i < k) {
		for (int i1 = 2; i1 < m + j; i1++)
		{
			if ((m + j) % i1 == 0){
				break;
			}
			if(i1==m+j-1){
				xx[i] = m + j;
				i++;
			}
		}
		j++;
	}
	for (int i2 = 0; i2 < k; i2++)
	{
		printf("%d ", xx[i2]);
	}
}

int main05() {
	int m, k;
	int xx[100] = {0};
	scanf_s("%d,%d", &m, &k);
	fun05(m, k, xx);

	return 0;
}