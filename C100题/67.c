#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 5

//ѧ���ļ�¼ʱ��ѧ�źͳɼ���ɣ�N��ѧ�������������������з���ṹ������s�У�
//���д����fun�����Ĺ���ʱ����������ָ��ѧ�ŵ�ѧ�����ݣ�ָ����ѧ���������������롣
//��û�ҵ�ָ��ѧ�ţ��ڽṹ������и�ѧ���ÿմ���
//���ɼ��� - 1, ��Ϊ����ֵ����(�����ַ����Ƚϵĺ���ʱstrcmp)��

typedef struct {
	int num;
	int score;
}stu;

stu fun67(stu* s,int x) {
	for (int i = 0; i < n; i++)
	{
		if (x == s[i].num) {
			return s[i];
		}
	}
	stu ss = { 0,-1 };
	return ss;
}

int main67() {
	stu s[n] = {
	{1,85},
	{2,78},
	{3,98},
	{4,78},
	{5,68}
	};
	printf("����ѧ������\n");
	int x;
	scanf_s("%d",&x);
	stu ss = fun67(s, x);
	printf("%d\n", ss.score);


	return 0;
}