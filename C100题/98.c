#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


//���д����fun�����Ĺ����ǣ����㲢���n(����n)�����ܱ�5��9������������Ȼ���ĵ���֮�͡�

double fun98(int x) {
	double sum = 0;
	for (int i = 1; i <= x; i++)
	{
		if (x % 9 == 0 || x % 5 == 0) {
			sum += 1.0 / x;
		}
	}
	return sum;
}