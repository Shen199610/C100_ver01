#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//���д����fun���书���ǣ�
//���㲢��� s = 1 + (1 + 2(0.5)) + (1 + 2(0.5) + 3(0.5)) + ... 
//+ (1 + 2(0.5) + 3(0.5) + ... + n(0.5))

double fun100(int n) {
	double sum = 0;
	double s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += sqrt(i);
		sum += s;
	}
	return sum;
}