#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

#define n 5

//N名学生的成绩已在主函数中放入一个带头节点的链表结构中，
//h指向链表的头节点。请编写函数fun，
//它的功能是：找出学生的最高分，由函数值返回。

typedef struct student {
	int score;
	struct student* next;
} linklist;

linklist* creat(int* s)  //创建带头结点的单链表
{
	linklist* h, * p, * q; 
	int i = 0;
	h = p = (linklist*)malloc(sizeof(linklist));    
	p->score = 0;
	while (i < n)
	{
		q = (linklist*)malloc(sizeof(linklist));
		q->score = s[i]; 
		i++; 
		p->next = q; 
		p = q;
	}
	p->next = 0;
	return h;
}

int fun22(linklist* h) {
	linklist* p;
	int max = h->score;
	int m = 0;
	p = h->next;
	while (p)
	{
		if (p->score > max) {
			max = p->score;
		}
		p = p->next;
	}
	return max;
}

int main()
{
	int* s[n] = { 65,86,75,35,64 };
	linklist* h = creat(s);
	int max = fun22(h);
	printf("%d\n", max);

	return 0;
}