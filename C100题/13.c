#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//���дһ������void fun(int tt[M][N], int pp[N]), 
//ttָ��һ��M��N�еĶ�ά�����飬�����ά������ÿ������СԪ�أ�
//�����η���pp��ָ��һά�����С���ά�����е��������������и��衣

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