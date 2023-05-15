#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//请编写一个函数fun, 它的功能是：求除1到m之内(含m)
//能被7或11整除的所有整数放在数组a中，通过n返回这些数的个数。

int fun27(int m) {
	int n = 0;
	while (m) {
		if (m % 7 == 0 || m % 11 == 0) {
			n++;
		}
		m--;
	}
	return n;
}

int main27() {
	printf("%d\n", fun27(14));
	return 0;
}