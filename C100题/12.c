#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//下列程序定义了N×N的二维数组，并在主函数中赋值。请编写函数fun, 
//函数的功能使求出数组周边元素的平均值并作为函数值返回给主函数中的s。

double fun12(int aa[][5]) {
    double sum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i == 0 || i == 4) {
            for (int j = 0; j < 5; j++)
            {
                sum += aa[i][j];
            }
        }
        else {
            sum = sum + aa[i][0] + aa[i][4];
        }
    }
    return sum / 16;
}

int main12() {
	time_t tm = time(NULL);
	srand((unsigned int)tm);
	int aa[5][5] = { 0 };
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            aa[i][j] = (rand() % 10);
        }
    }
    printf("%lf\n",fun12(aa, 5, 5));

	return 0;
}