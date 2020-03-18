
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct queue
 {
  int no;
  struct queue *next;
 }
*start=NULL;
void add();
int del();
void traverse();
void main()
 {
 
 do
 {
  clrscr();
  printf("\n\t\t----1. add");
  printf("\n\t\t----2. delete");
  printf("\n\t\t----3. traverse");
  printf("\n\t\t----0. exit");
  printf("\n\tPlease Type your choice");

 switch(getch())
  {
  case '1': clrscr();
	    add();
	    break;
  case '2': clrscr();
	    printf("\nThe deleted element is = %d",del());
	    getch();
	    break;
  case '3': clrscr();
	    traverse();
	    break;
  case '0': exit(0);
  default : continue;
   }
  }while(1);
 }

void add()
{
 struct queue *p,*temp;
 temp=start;
 p=(struct queue*)malloc(sizeof(struct queue));
 printf("Type the element");
 scanf("%d",&p->no);
 p->next=NULL;
 if(start==NULL)
   start=p;
 else
 {
   while(temp->next!=NULL)
      temp=temp->next;
  temp->next=p;
 }
}

int del()
 {
  struct queue *temp;
  int value;
  if(start==NULL)
  {
    printf("\nqueue is empty");
    getch();
    main();
  }
  else
  {
   temp=start;
   value=temp->no;
   start=start->next;
   free(temp);
  }
 return(value);
 }

void traverse()
 {
  struct queue *temp;
  temp=start;
  if(temp==NULL)
    {
     printf("\nQueue is Empty");
     getch();

  }
 else
  {
  while(temp!=NULL)
  {
   printf("\nELEMENT = %d",temp->no);
   temp=temp->next;
  }
  getch();
 }
}
