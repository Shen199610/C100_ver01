#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 5

//学生的记录时由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中，
//请编写函数fun，它的功能时：函数返回指定学号的学生数据，指定的学号在主函数中输入。
//若没找到指定学号，在结构体变量中给学号置空串，
//给成绩置 - 1, 作为函数值返回(用于字符串比较的函数时strcmp)。

typedef struct {
	int num;
	int score;
}stu;

stu fun67(stu* s,int x) {
	for (int i = 0; i < n; i++)
	{
		if (x == s[i].num) {
			return s[i];
		}
	}
	stu ss = { 0,-1 };
	return ss;
}

int main67() {
	stu s[n] = {
	{1,85},
	{2,78},
	{3,98},
	{4,78},
	{5,68}
	};
	printf("输入学生号码\n");
	int x;
	scanf_s("%d",&x);
	stu ss = fun67(s, x);
	printf("%d\n", ss.score);


	return 0;
}