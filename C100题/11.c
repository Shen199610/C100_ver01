//下列程序定义了N×N的二维数组，并在主函数中自动赋值。请编写函数 fun(int a[][N]), 
//该函数的功能是：使数组左下半三角元素中的值全部置成0。

#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

void fun11(int aa[][5], int m, int n) {
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
           aa[i][j] = 0;
        }
    }
}

int main11() {
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
    fun11(aa, 5, 5);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", *(*aa + i * 5 + j));
        }
        printf("\n");
    }
    return 0;
}
