#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,temp;
char text=("to draw a circle of given radius");
char pattern=("circle");
for(i=0;text[i]!='/0';i++)
{
j=0;
if(text[i]==pattern[j])
{
temp=i+1;
while(text[i]==pattern[j])
{
i++;
j++;
}
if(pattern[j]=='\0')
{
printf("string %s lies in string %s at position %d",pattern,temp);
exit(0);
}
else
{
i=temp;
temp=0;
}
}
}
if(temp=0)
{
printf("string 2 does not find");
}
getch();
}