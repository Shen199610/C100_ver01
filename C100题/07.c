//���дһ������int fun(int* s, int t, int* k), 
//���������������Ԫ���������е��±겢�����k��ָ�Ĵ��浥Ԫ�С�

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdio.h>

int fun07(int* s, int t, int* k) {
	k = s;
	for (int i = 0; i < 5; i++)
	{
		if (s[i] > *k) {
			k = &s[i];
		}
	}
	printf("%d\n", *k);
	return 0;
}
int main07() {
	int s[5] = { 3,1,4,6,2 };
	int*k =s;
	fun07(s, 5, k);
	
	return 0;
}