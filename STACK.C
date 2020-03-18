#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
 int no;
 struct stack *next;
}
*start=NULL;
typedef struct stack st;
void push();
int pop();
void display();

void main()
{
do
 {
  clrscr();
  printf("\n\t\t 1: push");
  printf("\n\t\t 2: pop");
  printf("\n\t\t 3: display");
  printf("\n\t\t 0: EXIT");
  printf("\n\t Please Type your choice");
switch (getch())
 {
  case '1': clrscr();
	    push();
	    break;
  case '2': clrscr();
	    printf("\nThe deleted element is = %d",pop());
	    getch();
	    break;
  case '3': clrscr();
	    display();
	    break;
  case '0': exit(0);
  default : continue;
  }
 }while (1);
}

void push()
{
 st *node;
 node=(st *)malloc(sizeof(st));
 printf("\n Type the element to be insert");
 scanf("%d",&node->no);
 node->next=start;
 start=node;
}

int pop()
{
 st *temp;
 temp=start;
 if(start==NULL)
  {
   printf("\nSTACK is empty");
   getch();
   main();
  }
 else
 {
  start=start->next;
  free(temp);
 }
 return(temp->no);
}

void display()
{
 st *temp;
 temp=start;
 if(temp==NULL)
  {
   printf("\nSTACK is empty");
   getch();
  }
else
 {
 while(temp!=NULL)
 {
  printf("\nELEMENT=%d",temp->no);
  temp=temp->next;
 }
 getch();
 }
}
















































































