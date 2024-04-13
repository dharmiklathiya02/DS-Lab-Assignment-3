#include<stdio.h>
#include<conio.h>
#define SIZE 10
void push(int);
void display();
int stack[SIZE],top=-1;
void main()
{
  int value,choice;
  clrscr();
  while(1)
  {
  printf("\n\n*****menu*****\n");
  printf("1.push\n 2.display\n 3.exit");
  printf("\n enter the choice");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:printf("enter the value to be insert:");
	 scanf("%d",&value);
	 push(value);
	 break;
  case 2:display();
	 break;
  case 3:exit(0);
  default: printf("\n wrong selection!!! try agaib!!!");
}
}
}
void push(int value)
{
if(top==SIZE-1)
printf("\n stack is full!!! insertion is not possible!!!");
else
{
top++;
stack[top]=value;
printf("\n insertion sucess!!!");
}
}
void display()
{
if(top==-1)
printf("\n stack is empty!!!");
else
{
int i;
printf("\n stack element are:\n");
for(i=top;i>=0;i--)
printf("%d \n",stack[i]);
}
}

