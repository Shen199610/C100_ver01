//*1.m个人的成绩存放在score数组中，请编写函数fun,它的功能是：将低于平均分的人
//数作为函数值返回，将低于平均分的分数放在below所指定的数组中。 

#include<stdio.h>

//数组作为形参，退化为指针，所以不能对指针反复放入循环
int fun01(int score[],int below[]) {
	int* temp = score;
	double sum = 0;
	int i = 0;
	while (*score) {
		sum += *score;
		score++;
		i++;
	}
	double aver = sum/i;
	
	int j = 0;
	while (*temp) {
		if (*temp < aver) {
			*below = *temp;
			below++;
			j++;
		}
		temp++;
	}
	return j;
}

int main01() {
	//数组空间必须大于实际存储数据，否则最后一个数字之后不是0，是数组越界
	int score[10] = {1,2,3,4,5,7,10};
	int below[10] = { 0 };
	int num = fun01(score,below);
	printf("%d\n", num);
	for (int i = 0; i < num; i++)
	{
		printf("%d ", below[i]);
	}

	return 0;
}