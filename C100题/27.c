#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//���дһ������fun, ���Ĺ����ǣ����1��m֮��(��m)
//�ܱ�7��11����������������������a�У�ͨ��n������Щ���ĸ�����

int fun27(int m) {
	int n = 0;
	while (m) {
		if (m % 7 == 0 || m % 11 == 0) {
			n++;
		}
		m--;
	}
	return n;
}

int main27() {
	printf("%d\n", fun27(14));
	return 0;
}