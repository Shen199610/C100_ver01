#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 5
#define n 5

//ѧ���ļ�¼����ѧ�źͳɼ���ɣ�N��ѧ�������������������з���ṹ������s�У�
//���д����fun�����Ĺ����ǣ���ָ��������Χ�ڵ�ѧ�����ݷ���b��ָ�������У�
//������Χ�ڵ�ѧ�������ɺ���ֵ���ء�

typedef struct {
	int num;
	int score;
} stu;

int fun57(stu s[],stu b[],int x,int y) {
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i].score > 70 &&s[i].score<90) {
			b[j] = s[i];
			j++;
		}
	}
	return j;
}

int main57() {
	stu s[n] = {
		{1,85},
		{2,78},
		{3,98},
		{4,78},
		{5,68}
	};
	stu b[n];
	int a = fun57(s, b, 80, 90);
	printf("%d\n", a);
	for (int i = 0; i < a; i++)
	{
		printf("%d\n", b[i].score);
	}
	return 0;
}
