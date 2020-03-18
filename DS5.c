#include<stdio.h>
#include<conio.h>
struct node
{
   int data;
   struct node *next;
};
main()
{
   struct node *root,*temp,*roottemp;
   int i,t,j;
 while(1)
 {
   clrscr();
   printf("1. Create First Node of the List");
   printf("\n2. Insert at the beginning ");
   printf("\n3. Insert at the end of the list ");
   printf("\n4. Insert in middle of the list ");
   printf("\n5. Traverse the list ");
   printf("\n6. Count the number of Node");
   printf("\n7. Destroy the list");
   printf("\n8. Quit");
   printf("\nEnter Your Choice ");
   scanf("%d",&i);
   switch(i)
   {
	case 1 :   	root=(struct node *) malloc(sizeof(struct node));
			printf("Data for first node");
			scanf("%d",&(root->data));
			root->next=NULL;
			break;
	case 2 :        temp=(struct node *) malloc(sizeof(struct node));
			printf("value for new node");
			scanf("%d",&(temp->data));
			temp->next=root;
			root =temp;
			break;
	case 3 :        temp=(struct node *) malloc(sizeof(struct node));
			printf("value for new node");
			scanf("%d",&(temp->data));
			temp->next=NULL;
			roottemp=root;
			do
			{
				if(root->next==NULL)
					break;
				else
					roottemp=roottemp->next;
			}while(roottemp->next!=NULL);
			roottemp->next=temp;
			break;
	case 4 :   	temp=(struct node *) malloc(sizeof(struct node));
			printf("Enter Value to insert");
			scanf("%d",&(temp->data));
			temp->next =NULL;
			printf("After which number to insert");
			scanf("%d",&t);
			roottemp=root;
			while(roottemp->data!=t)
			{
			   roottemp=roottemp->next;
			}
			if(roottemp==NULL)
			{
			   printf("Node not found");
			   free(temp);
			}
			else
			{
			   temp->next = roottemp->next;
			   roottemp->next=temp;
			}
			break;
	case 5 :	roottemp=root;
			do
			{
				printf("\n%d\t%d",roottemp,roottemp->data);
				roottemp=roottemp->next;
			} while(roottemp!=NULL);
			getch();
			break;
	case 6 :	roottemp=root;
			t=0;
			while(roottemp!=NULL)
			{
				t++;
				roottemp=roottemp->next;
			}
			printf("\nTotal No. of Nodes in the List are %d",t);
			getch();
			break;
	case 7 :        do
			{
				roottemp=root;
				root=root->next;
				free(roottemp);
			}while(root!=NULL);
			break;
	default :	exit();
   }
