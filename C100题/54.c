#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 50
#define n 5

//学生的记录由学号和成绩组称个，
//N名学生的数据已在主函数中放入结构体数组s中，
//请编写函数fun，它的功能是：把低于平均分的学生数据放在b所指的数组中，
//低于平均分的学生人数通过形参n传回，平均分通过函数值返回。

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
