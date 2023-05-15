#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//请编写一个函数void fun(int tt[M][N], int pp[N]), 
//tt指向一个M行N列的二维函数组，求出二维函数组每列中最小元素，
//并依次放入pp所指定一维数组中。二维数组中的数已在主函数中赋予。

void func13(int aa[][5], int pp[5]) {
    for (int i = 0; i < 5; i++)
    {
        pp[i] = aa[i][0];
        for (int j = 1; j < 5; j++)
        {
            if (pp[i] < aa[i][j]) pp[i] = aa[i][j];
        }
    }
}

int main13() {
    time_t tm = time(NULL);
    srand((unsigned int)tm);
    int aa[5][5] = { 0 };
    int pp[5] = { 0 };
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            aa[i][j] = (rand() % 10);
        }
    }
    func13(aa, pp);
    for (int j = 0; j < 5; j++)
    {
        printf("%d ", pp[j]);
    }

    return 0;
}