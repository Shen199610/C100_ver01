//* 3.���д����void fun(int x, int pp[], int* n), ���Ĺ����ǣ�
//���������x�Ҳ���ż���ĸ�������������С�����˳�����pp��ָ�������У�
//��Щ�����ĸ���ͨ���β�n���ء�

#include<stdio.h>

void fun03(int x, int pp[], int* n) {
	int t = x;
	*n = 0;
	while (x) {
		if (((t / x)%2==1)&&(t % x==0)) {
			pp[*n] = x;
			*n+=1;
		}
		x--;
	}
}

int main03() {
	int x, pp[100], n;
	//scanf_s("%d", &x);
	//fun03(x, pp, &n);
	//for (int i = 0; i < n; i++)
	//{
	//	printf("%d ", pp[i]);
	//}

	printf("%lf\n", (double)(5 / 2));

	return 0;
}
