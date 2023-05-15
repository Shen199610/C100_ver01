#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 5

//学生的记录由学号和成绩组成N名学生的数据已在主函数中放入结构体数组s中，
//请编写函数fun，它的功能时：把分数最低的学生数据放在h所指的数组中，
//注意：分数最低的学生可能不止一个，函数返回分数最低的学生的人数。

typedef struct {
	int num;
	int score;
}stu;

int fun74(stu s[],stu ss[]) {
	int min = s[0].score;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i].score < min) {
			min = s[i].score;
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (s[i].score == min) {
			ss[k] = s[i];
			k++;
		}
	}
	return k;
}

int main74() {
	stu s[n] = {
		{1,85},
		{2,78},
		{3,76},
		{4,76},
		{5,95}
	};
	stu ss[n];
	printf("%d\n", fun74(s,ss));

	return 0;
}