#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>


//���д����fun, �����Ĺ���ʹ�����ά�����ܱ�Ԫ��֮�ͣ�
//��Ϊ����ֵ���ء���ά�����е�ֵ���������и��衣

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
