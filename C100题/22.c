#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>

#define n 5

//N��ѧ���ĳɼ������������з���һ����ͷ�ڵ������ṹ�У�
//hָ�������ͷ�ڵ㡣���д����fun��
//���Ĺ����ǣ��ҳ�ѧ������߷֣��ɺ���ֵ���ء�

typedef struct student {
	int score;
	struct student* next;
} linklist;

linklist* creat(int* s)  //������ͷ���ĵ�����
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