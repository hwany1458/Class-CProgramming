#include<stdio.h>
#include<stdlib.h>
struct node {
                char data;
  	        struct node *link;
	      };
struct node *head;
struct node a1,a2,a3,a4,a5;
void simple_linked_list(void);
void trace_list(void);
void del_node(struct node *d, struct node *x, struct node *first);


int main(void)
{
   simple_linked_list();
   del_node(&a4, &a1, head);
   trace_list();
   return 0;
} 


void simple_linked_list(void)
{
 a1.data='K';  a2.data='F';
 a3.data='B';  a4.data='D';
 a5.data='A';  
 head=&a5;  a5.link=&a1;
 a1.link=&a4;  a2.link=NULL;
 a3.link=&a2;  a4.link=&a3;
}



void trace_list(void)
{
 while(head!=NULL)
 {
   printf("데이터: %c, 주소: %u\n", head->data, head->link);
   head=head->link;
 }
}

void insert(struct node *first, struct node *x)
{
  struct node *t;
  t=(struct node *)malloc(sizeof(struct  node));
  t->data='C';
  if (first == NULL) 	{
		first = t;
		t->link=NULL; }
  else 	{
	 t->link=x->link;
	 x->link=t; }
 }

void del_node(struct node *d, struct node *x, struct node *first)
{
 if (x == NULL)
    first = d->link;
 else
    x->link=d->link;
}

