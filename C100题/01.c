//*1.m���˵ĳɼ������score�����У����д����fun,���Ĺ����ǣ�������ƽ���ֵ���
//����Ϊ����ֵ���أ�������ƽ���ֵķ�������below��ָ���������С� 

#include<stdio.h>

//������Ϊ�βΣ��˻�Ϊָ�룬���Բ��ܶ�ָ�뷴������ѭ��
int fun01(int score[],int below[]) {
	int* temp = score;
	double sum = 0;
	int i = 0;
	while (*score) {
		sum += *score;
		score++;
		i++;
	}
	double aver = sum/i;
	
	int j = 0;
	while (*temp) {
		if (*temp < aver) {
			*below = *temp;
			below++;
			j++;
		}
		temp++;
	}
	return j;
}

int main01() {
	//����ռ�������ʵ�ʴ洢���ݣ��������һ������֮����0��������Խ��
	int score[10] = {1,2,3,4,5,7,10};
	int below[10] = { 0 };
	int num = fun01(score,below);
	printf("%d\n", num);
	for (int i = 0; i < num; i++)
	{
		printf("%d ", below[i]);
	}

	return 0;
}