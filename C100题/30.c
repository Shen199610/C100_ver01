#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//���дһ������fun�����Ĺ����ǣ�
//���һ��2��M���Ͷ�ά���������Ԫ�ص�ֵ��������ֵ���ص��ú�����

int fun30(int a[][5],int n) {
	int max = a[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (a[i][j] > max) {
				max = a[i][j];
			}
		}
	}
	return max;
}

int main30() {
	int a[2][5] = { {2,5,6,5,8},{5,9,3,6,4} };
	int n = 2;
	printf("%d\n", fun30(a, n));

	return 0;
}