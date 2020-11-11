#include <stdio.h>
#include <stdlib.h>


struct node{
	int data;
	node *next;
};

int main(void)
{
	node *head,*p1,*p2;
	int i;
	head = 0;

	for(int i = 1;i <= 5;i++){
		p1 = (node *)malloc(sizeof(node));
		(*p1).data = i;
		if( head == 0 ){
			head = p1;
			p2 = p1;
		}
		else
		{
			p2->next = p1;
			p2=p1;
		}
	}
	p2->next = 0;

	node *p;
	p = head;
	while( p!=0 ){
		printf("%d", p->data);
		p=p->next;
	}
	return 0;
}


