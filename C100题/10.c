//��д����fun, ���Ĺ����ǣ��������µļ򵥵��������󷽳�cos(x) - x = 0��һ��ʵ����
//�����������£�
//(1)ȡx1��ֵΪ0.0��
//(2)x0 = x1, ��x1��ֵ����x0;
//(3)x1 = cos(x0), ���һ���µ�x1;
//(4)��x0 - x1�ľ���ֵС��0.000001����ִ�в���(5), ����ִ�в���(2);
//(5)����x1���Ƿ���cos(x) - x = 0��һ��ʵ������Ϊ����ֵ���ء�
//�������Root = 0.739085��

#include<stdio.h>
#include<stdio.h>
#include<math.h>


double fun10() {
	double x1 = 0.0;
	double x0 = 0.0;
	while (1) {
		x0 = x1;
		x1 = cos(x0);
		if (fabs(x1 - x0) < 0.00001) {
			return x0;
		}
	}
}

int main10() {
	printf("%lf\n", fun10());
	return 0;
}