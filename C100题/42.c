#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define n 3

//下列程序定义了N×N的二维数组，并在主函数中自动赋值。
// 请编写函数fun(int a[][N], int n), 
//该函数的功能是：将数组右上半三角元素中的值乘以m。

int fun42(int aa[][3]) {
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j > i; j--)
        {
            aa[i][j] *= 3;
        }
    }
}

int main42() {
    time_t tm = time(NULL);
    srand((unsigned int)tm);
    int aa[n][n] = { 0 };
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            aa[i][j] = (rand() % 10);
        }
    }
    fun42(aa);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", aa[i][j]);
        }
        printf("\n");
    }
	return 0;
}