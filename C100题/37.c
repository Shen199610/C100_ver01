#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//某学生的记录由学号、8门课程成绩和平均分组成，
//学号和8门课程的成绩已在主函数中给出。请编写函数fun，它的功能是：
//求出该学生的平均分放在记录的ave成员中。请自己定义正确的形参。

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