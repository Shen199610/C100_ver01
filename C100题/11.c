//���г�������N��N�Ķ�ά���飬�������������Զ���ֵ�����д���� fun(int a[][N]), 
//�ú����Ĺ����ǣ�ʹ�������°�����Ԫ���е�ֵȫ���ó�0��

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
