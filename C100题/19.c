#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//��д����fun, �ú����Ĺ����ǣ����ַ���ɾ��ָ�����ַ���
//ͬһ��ĸ�Ĵ�Сд����ͬ�ַ�����

char* fun19(char*a,char b) {
	char aa[100] = { 0 };
	int i = 0;
	while (*a) {
		if (*a != b) {
			aa[i] = *a;
			i++;
		}
		a++;
	}
	return aa;
}

int main19() {
	char a[] = "abcdefg";
	char b = 99;
	char*aa = fun19(a,b);
	printf("%s\n", aa);
	return 0;

}