#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

//请编写函数fun, 对长度位7个字符的字符串，
//除首尾字符外，将其余5个字符按ASCII码降序排列。

int fun21(char*ch,int n) {
	ch++;
	n -= 2;
	for (int i = 0; i < n-1; i++)
		{
			for (int j = 0; j < n-1-i; j++)
			{
				if (*(ch + j) < *(ch + 1 + j)) {
					char temp = *(ch + 1 + j);
					*(ch + 1 + j) = *(ch + j);
					*(ch + j) = temp;
				}
			}
		}	
	return 0;
}

int main21() {
	char ch[] = "nihaoshabi";
	int n = sizeof(ch) / sizeof(ch[1])-1;

	fun21(ch,n);
	printf("%s\n", ch);

	return 0;
}