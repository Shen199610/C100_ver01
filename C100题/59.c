#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 22

//���д����fun���ú����Ĺ����ǣ�
//�������ַ��������е�M���ַ���(ÿ���ĳ��Ȳ�����N)����˳��ϲ����һ���µ��ַ�����

void fun59(char ss[][n], char* a) {
	int k = 0;
	for (int i = 0; i <m ; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (*(*(ss + i) + j)) {
				a[k++] = *(*(ss + i) + j);
			}
			else {
				break;
			}
		}
	}
	a[k] = 0;
}

int main59() {
	char ss[][n] = {
		"nihao",
		"shabi",
		"shabi"
	};
	char s[m*n] = {0};
	printf("%s\n",s);

	return 0;
}