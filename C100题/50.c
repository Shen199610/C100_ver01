#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//��֪ѧ���ļ�¼����ѧ�ź�ѧϰ�ɼ����ɣ�
//N��ѧ���������Ѵ���a�����������С����д����fun��
//�ú����Ĺ����ǣ��ҳ��ɼ���ߵ�ѧ����¼��
//ͨ���βη���������(�涨ֻ��һ����߷�)��

struct stu {
	int num;
	int score;
};

void fun50(struct stu s[], struct stu* t) {
	*t = s[0];
	for (int i = 1; i < 5; i++)
	{
		if (s[i].score > t->score) {
			*t = s[i];
		}
	}
}

int main50() {
	struct stu s[5] = {
	{1,88},
	{2,78},
	{3,98},
	{4,28},
	{5,68}
	};
	struct stu* c = &s[0];
	fun50(s, c);
	printf("%d\n", c->score);

	return 0;
}