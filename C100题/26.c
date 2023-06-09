#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//请编写一个函数fun，它的功能是：根据以下公式求X的值(要求满足精度0.0005，
//	即某项小于0.0005时停止迭代)：
//X / 2 = 1 + 1 / 3 + 1×2 / 3×5 + 1×2×3 / 3×5×7 + 1×2×3×4 
/// 3×5×7×9 + ... + 1×2×3×...×n / 3×5×7×(2n + 1)
//程序运行后，如果输入精度0.0005，则程序输出为3.14...。

double fun26(double err) {
	double pi = 1, a = 1;
	for (int i = 1; a >=err; i++)
	{
		a = a * i / (2 * i + 1);
		pi = pi + a;
	}
	return 2 * pi;
}

int main26() {
	printf("%lf", fun26(0.00005));
	return 0;
}