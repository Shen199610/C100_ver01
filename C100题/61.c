#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 22

//请编写函数fun，该函数的功能使：统计各年龄段的人数。
//N个年龄通过调用随机函数获得，并放在主函数的age数组中；
//要求函数把0至9岁年龄段的人数放在d[0]中，把10至19岁年龄段的人数放在d[1]中，
//把20至29岁的人数放在d[2]中，
//其余以此类推，把100岁(含100以上年龄的人数都放在d[10]中。结果在主函数中输出。

void fun61(int *d,int *age) {
	for (int i = 0; i < n; i++)
	{
		if (age[i] < 100) {
			d[age[i] / 10]++;
		}
		else {
			d[10]++;
		}
	}
}

int main61() {
	time_t tm = time(NULL);
	int d[11] = { 0 };
	int age[n] = { 0 };

	srand((unsigned int)tm);
	for (int i = 0; i < n; i++)
	{
		age[i] = (rand() % 120);
	}
	fun61(d, age);
	for (int i = 0; i < 11; i++)
	{
		printf("%d\n", d[i]);
	}
	return 0;
}