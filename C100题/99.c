#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>



//���д����fun ���书���ǣ����㲢���3��n֮������������ƽ����֮�͡�

double fun99(int n) {
	double sum = 0;
	while (n>=3) {
		int i = 2;
		for (i = 2; i < n; i++)
		{
			if (n % i == 0) break;
		}
		if (i = n) {
			sum += sqrt(1.0 / n);
		}
		n--;
	}
	return sum;
}