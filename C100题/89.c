#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 5

//ѧ���ļ�¼����ѧ�źͳɼ���ɣ�
//N��ѧ�������������������з���ṹ������s�У����д����fun��
//���Ĺ����ǣ��Ѹ��ڵ���ƽ���ֵ�ѧ�����ݷ���b��ָ�������У�
//���ڵ���ƽ���ֵ�ѧ������ͨ���β�n���أ�ƽ����ͨ������ֵ���ء�

typedef struct {
	int num;
	int score;
}stu;

int fun89(stu s[], stu b[]) {
	int ave = 0;
	for (int i = 0; i < n; i++)
	{
		ave += s[i].score;
	}
	ave = ave / 5;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i].score > ave) {
			b[k] = s[i];
			k++;
		}
	}
	return k;
}

int main89() {
	stu s[n] = {
	{1,85},
	{2,78},
	{3,98},
	{4,78},
	{5,68}
	};
	stu b[n];
	int k = fun89(s, b);
	for (int i = 0; i < k; i++)
	{
		printf("%d\n", b[i].score);
	}

	return 0;
}