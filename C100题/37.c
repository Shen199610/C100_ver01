#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//ĳѧ���ļ�¼��ѧ�š�8�ſγ̳ɼ���ƽ������ɣ�
//ѧ�ź�8�ſγ̵ĳɼ������������и��������д����fun�����Ĺ����ǣ�
//�����ѧ����ƽ���ַ��ڼ�¼��ave��Ա�С����Լ�������ȷ���βΡ�

struct stu {
	int num;
	double a[8];
	double ave;
};

void fun37(struct stu *s) {
	double sum=0;
	for (int i = 0; i < 8; i++)
	{
		sum += s->a[i];
	}
	s->ave = sum / 8;
}

int main37() {
	struct stu s = { 7,89.5,98.0,67.5,88.0,90,77,79,97 };
	fun37(&s);
	printf("%lf\n", s.ave);

	return 0;
}