#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 5

//ѧ���ļ�¼��ѧ�źͳɼ����N��ѧ�������������������з���ṹ������s�У�
//���д����fun�����Ĺ���ʱ���ѷ�����͵�ѧ�����ݷ���h��ָ�������У�
//ע�⣺������͵�ѧ�����ܲ�ֹһ�����������ط�����͵�ѧ����������

typedef struct {
	int num;
	int score;
}stu;

int fun74(stu s[],stu ss[]) {
	int min = s[0].score;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i].score < min) {
			min = s[i].score;
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (s[i].score == min) {
			ss[k] = s[i];
			k++;
		}
	}
	return k;
}

int main74() {
	stu s[n] = {
		{1,85},
		{2,78},
		{3,76},
		{4,76},
		{5,95}
	};
	stu ss[n];
	printf("%d\n", fun74(s,ss));

	return 0;
}