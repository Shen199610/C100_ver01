#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//ѧ���ļ�¼��ѧ�źͳɼ���ɣ�N��ѧ�������������������з���ṹ������s�У�
//���д����fun�����Ĺ���ʹ���ѷ�����ߵ�ѧ�����ݷ���h��ָ�������У�
//ע�⣺������ߵ�ѧ�����ܲ�ֹһ�����������ط�����ߵ�ѧ����������

struct stu {
	int num;
	int score;
};

int* fun34(struct stu *s,int*h) {
	h[1] = s[0].score;
	for (int i = 0; i < 5; i++)
	{
		if (s[i].score > h[1]) {
			h[1] = s[i].score;
			h[0] = i+1;
		}
	}
	return h;
}

int main34() {
	struct stu s[5] = {
		{1,88},
		{2,85},
		{3,89},
		{4,90},
		{5,87},
	};
	int h[] = { 0,0 };
	fun34(s,h);
	for (int i = 0; i < 2; i++)
	{
		printf("%d\n", h[i]);
	}
	return 0;
}