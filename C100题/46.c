#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//学生得记录由学号和成绩组称个，N名大学生得数据已在主函数中放入结构体数组s中，
//请编写函数fun，它的功能时：按分数的高低排列学生的记录，高分在前。

struct stu {
	int num;
	int score;
};

int fun46(struct stu s[]) {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4-i; j++)
		{
			if (s[j].score > s[j + 1].score) {
				struct stu t = s[j];
				s[j] = s[j + 1];
				s[j + 1] = t;
			}
		}
	}
}

int main46() {
	struct stu s[5] = {
		{1,88},
		{2,78},
		{3,98},
		{4,28},
		{5,68}
	};
	fun46(s);
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", s[i].score);
	}

	return 0;
}
