#include<stdio.h>
struct dnode { 
          struct dnode *llink;
	  char data;
	  struct dnode *rlink;
          };
struct dnode *head;
struct dnode a1,a2,a3,a4,a5,a6,a7,a8,a9;
void tree_structure(void);
int main(void)
{ 
	tree_structure();
	return 0;
}
void tree_structure(void)
{
  a1.data='*';   a2.data='+';
  a3.data='A';   a4.data='B';
  a5.data='-';   a6.data='C';
  a7.data='+';   a8.data='D';
  a9.data='E';
  head=&a1;
  a1.llink=&a2;   a1.rlink=&a5;
  a2.llink=&a3;   a2.rlink=&a4;
  a3.llink=NULL;  a3.rlink=NULL;
  a4.llink=NULL;  a4.rlink=NULL;
  a5.llink=&a6;   a5.rlink=&a7;
  a6.llink=NULL;  a6.rlink=NULL;
  a7.llink=&a8;  a7.rlink=&a9;
  a8.llink=NULL; a8.rlink=NULL;
  a9.llink=NULL; a9.rlink=NULL;
}
