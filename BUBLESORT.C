/* Bubble SORT*/



#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,j,temp;
clrscr();
printf("How Many Elements");
scanf("%d",&n);
printf("Enter the element of array");
for(i=0;i<=n-1;i++)
 {
  scanf("%d",&a[i]);
 }
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
     {
      if(a[j]>a[j+1])
	{
	 temp=a[j];
	 a[j]=a[j+1];
	 a[j+1]=temp;
	}
      }
}
printf("Element of array after the buble sorting are:\n");
for(i=0;i<=n-1;i++)
{
printf("%d\n",a[i]);
}
getch();
}
