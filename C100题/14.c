#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>


//请别写函数fun, 函数的功能使求出二维数组周边元素之和，
//作为函数值返回。二维数组中的值在主函数中赋予。

double fun14(int aa[][5]) {
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
    return sum;
}

int main14() {
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
    printf("%lf\n", fun14(aa));

    return 0;
}
