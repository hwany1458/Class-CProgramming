#include <stdio.h>
#include <string.h>
struct user
  {
	char name[20];
	char phone[14];
	int quick;
  };
void display_st(struct user *data);
void change_st(struct user *data);
int main(void)
{
 struct user d={"김명환",
	          "011-123-4567",
		  1};
 display_st(&d);
 change_st(&d);
 display_st(&d);
 return 0;
}
void display_st(struct user *data)
{ 
 printf("name  : %s\n", data->name);
}
void change_st(struct user *data)
{ 
 strcpy(data->name, "이진영");
}
