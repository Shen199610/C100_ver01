#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 50
//���д����fun���书���ǣ�
//�����д���1С������m�ķ���������xx��ָ�������У��������ĸ���ͨ��k���ء�

int fun51(int* xx) {
	int n = m;
	int k = 0;
	while (n--) {
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0) {
				xx[k] = n;
				k++;
				break;
			}
		}
	}
	return k;
}

int main51() {
	int xx[50] = { 0 };
	int k = fun51(xx);
	printf("%d\n",k);
	for (int i = 0; i < k; i++)
	{
		printf("%d\n", xx[i]);
	}

	return 0;
}


