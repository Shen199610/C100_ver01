#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 50
#define n 5

//ѧ���ļ�¼��ѧ�źͳɼ���Ƹ���
//N��ѧ�������������������з���ṹ������s�У�
//���д����fun�����Ĺ����ǣ��ѵ���ƽ���ֵ�ѧ�����ݷ���b��ָ�������У�
//����ƽ���ֵ�ѧ������ͨ���β�n���أ�ƽ����ͨ������ֵ���ء�

struct stu {
	int name;
	int score;
};

int fun54(struct stu b[], struct stu s[]) {
	int ave = 0;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += s[i].score;
	}
	ave = sum / n;
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i].score < ave) {
			b[j] = s[i];
			j++;
		}
	}
	return j;
}

int main54() {
	struct stu s[n] = {
		{1,85},
		{2,78},
		{3,98},
		{4,78},
		{5,68}
	};
	struct stu b[5] = { 0 };
	int x = fun54(b, s);
	printf("%d\n", x);
	for (int i = 0; i < x; i++)
	{
		printf("%d\n", b[i].score);
	}
	return 0;
}
