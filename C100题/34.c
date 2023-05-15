#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//学生的记录由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中，
//请编写函数fun，它的功能使：把分数最高的学生数据放在h所指的数组中，
//注意：分数最高的学生可能不止一个，函数返回分数最高的学生的人数。

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