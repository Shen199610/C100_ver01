#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define m 3
#define n 22

//���д����fun���ú����Ĺ���ʹ��ͳ�Ƹ�����ε�������
//N������ͨ���������������ã���������������age�����У�
//Ҫ������0��9������ε���������d[0]�У���10��19������ε���������d[1]�У�
//��20��29�����������d[2]�У�
//�����Դ����ƣ���100��(��100�������������������d[10]�С�������������������

void fun61(int *d,int *age) {
	for (int i = 0; i < n; i++)
	{
		if (age[i] < 100) {
			d[age[i] / 10]++;
		}
		else {
			d[10]++;
		}
	}
}

int main61() {
	time_t tm = time(NULL);
	int d[11] = { 0 };
	int age[n] = { 0 };

	srand((unsigned int)tm);
	for (int i = 0; i < n; i++)
	{
		age[i] = (rand() % 120);
	}
	fun61(d, age);
	for (int i = 0; i < 11; i++)
	{
		printf("%d\n", d[i]);
	}
	return 0;
}