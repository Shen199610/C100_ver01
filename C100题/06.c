//���дһ������void fun(char a[], char b[], int n), 
//�书���ǣ�ɾ�����ַ�����ָ���±���ַ������У�aָ��ԭ�ַ�����
//ɾ������ַ��������b��ָ�������У�n�д��ָ�����±ꡣ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdio.h>

void fun06(char* a, char* b, int n) {
	for (int i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	for (int i = n; i < strlen(a); i++)
	{
		b[i] = a[i + 1];
	}
}

int main06() {
	char a[100] = { 0 };
	char b[100] = { 0 };
	int n = 2;
	scanf_s("%s", a, 100);
	fun06(a, b, n);
	printf("%s\n", b);
	
	return 0;
}