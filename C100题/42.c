#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define n 3

//���г�������N��N�Ķ�ά���飬�������������Զ���ֵ��
// ���д����fun(int a[][N], int n), 
//�ú����Ĺ����ǣ����������ϰ�����Ԫ���е�ֵ����m��

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