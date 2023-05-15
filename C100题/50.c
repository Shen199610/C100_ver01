#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//已知学生的记录是由学号和学习成绩构成，
//N名学生的数据已存入a机构体数组中。请编写函数fun，
//该函数的功能是：找出成绩最高的学生记录，
//通过形参返回主函数(规定只有一个最高分)。

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