#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//编写程序，实现矩阵(3行3列)的转置(即行列互换)。

void fun18(int aa[][3]) {
    for (int i = 1; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int t;
            t = aa[i][j];
            aa[i][j] = aa[j][i];
            aa[j][i] = t;
        }
    }
    return;
}

int main18() {
    int aa[3][3] = { 0 };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            aa[i][j] = 3*i+j;
        }
    }
    fun18(aa);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", *(*aa + i * 3 + j));
        }
        printf("\n");
    }
	return 0;
}