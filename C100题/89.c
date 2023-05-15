#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 5

//学生的记录是由学号和成绩组成，
//N名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，
//它的功能是：把高于等于平均分的学生数据放在b所指的数组中，
//高于等于平均分的学生人数通过形参n传回，平均分通过函数值返回。

typedef struct {
	int num;
	int score;
}stu;

int fun89(stu s[], stu b[]) {
	int ave = 0;
	for (int i = 0; i < n; i++)
	{
		ave += s[i].score;
	}
	ave = ave / 5;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i].score > ave) {
			b[k] = s[i];
			k++;
		}
	}
	return k;
}

int main89() {
	stu s[n] = {
	{1,85},
	{2,78},
	{3,98},
	{4,78},
	{5,68}
	};
	stu b[n];
	int k = fun89(s, b);
	for (int i = 0; i < k; i++)
	{
		printf("%d\n", b[i].score);
	}

	return 0;
}