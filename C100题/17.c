#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//���дһ������fun(char *s)���ú����Ĺ���ʹ���ַ����е��������á�

void fun17(char* s) {
	for (int i = 0; i < strlen(s)/2; i++)
	{
		char tm = s[i];
		s[i] = s[strlen(s) - i-1];
		s[strlen(s) - i-1] = tm;
	}
	return;
}

int main17() {
	char s[] = "abcdefg";

	fun17(s);
	printf("%s\n", s);

	return 0;
}

