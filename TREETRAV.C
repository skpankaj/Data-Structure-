/*traversing of tree*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct rec
{
	long num;
	struct rec *left;
	struct rec *right;
};
struct rec *tree=NULL;
struct rec *insert(struct rec *tree,long num);
void preorder(struct rec *tree);
void inorder(struct rec *tree);
void postorder(struct rec *tree);
int count=1;
void main()
{
	long digit;
	do
	 {      clrscr();
		puts("\n\t\tEnter 1: Insert node in the TREE");
		puts("\n\t\tEnter 2: Display(preorder)the TREE");
		puts("\n\t\tEnter 3: Display(inorder)the TREE");
		puts("\n\t\tEnter 4: Display(postorder)the TREE");
		puts("\n\t\tEnter 0: END");
		printf("\n\t\tEnter your choice ");
		switch(getch())
		{
		case '1':clrscr();
			 puts("\nType the elements :: Enter 0 for exit ");
			 scanf("%ld",&digit);
			 while(digit!=0)
			    {
				tree=insert(tree,digit);
				scanf("%ld",&digit);
			    }
			 continue;
		case '2': clrscr();
			  if(tree==NULL)
			    puts("\nTree empty");
			  else
			  {
			   puts("\nPreorder traversing TREE  ");
			   preorder(tree);
			  }
			  getch();
			continue;

		case '3':clrscr();
			 if(tree==NULL)
			    puts("\nTree empty");
			 else
			 {
			  puts("\nInorder traversing TREEE");
			  inorder(tree);
			 }
			 getch();
			 continue;
		case '4':clrscr();
			  if(tree==NULL)
			    puts("\nTree empty");
			  else
			  {
			   puts("\nPostorder traversing TREE");
			   postorder(tree);
			  }
			  getch();
			 continue;
		case '0':exit(0);
		default: continue;
		}
	}while(1);
}

struct rec *insert(struct rec *tree,long digit)
{
if(tree==NULL)
{
tree=(struct rec *)malloc(sizeof(struct rec));
tree->left=tree->right=NULL;
tree->num=digit;
}
else
if(digit<tree->num)
tree->left=insert(tree->left,digit);
else if(digit>tree->num)
tree->right=insert(tree->right,digit);
else if(digit==tree->num)
{puts("\nDuplicate nodes: program returned");main();
}
return(tree);
}
void preorder(struct rec *tree)
{
	if(tree!=NULL)
	  {
		printf("%12ld\n",tree->num);
		preorder(tree->left);
		preorder(tree->right);
	  }

}

void inorder(struct rec *tree)
{
	if(tree!=NULL)
	    {
		inorder(tree->left);
		printf("%12ld\n",tree->num);
		inorder(tree->right);
	    }

}
void postorder(struct rec *tree)
{
	if(tree!=NULL)
	  {
		postorder(tree->left);
		postorder(tree->right);
		printf("%12ld\n",tree->num);
	  }

}
