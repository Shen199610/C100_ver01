#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//���дһ������fun�����Ĺ����ǣ���ss��ָ�ַ����������±�Ϊ����λ���ϵ�
//��ĸת��Ϊ��д(����λ���ϲ�����ĸ����ת��)��

int fun29(char*ss) {
	int n = 0;
	while (*ss) {
		if (97 <= *ss < 123) {
			*ss -= 32;
		}
		ss += 2;
	}
	return 0;
}

int main29() {
	char ss[100] = "djaAASDJnjsd";
	fun29(ss);
	printf("%s\n", ss);
	return 0;
}