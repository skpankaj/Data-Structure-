/* Write a C program rev(char s[]) to reverse a given string in place.
   The function rev() accepts as arguments the name of the array holding
   the character of the string.						*/

#include <stdio.h>
#include <conio.h>
void rev(char []);
main()
{
	char str[20];
	clrscr();
	printf("Enter any String ");
	fflush(stdin);
	gets(str);
	rev(str);
	printf("\nThe reversed string is :\n%s",str);
getch();
return 0;
}

void rev(char s[])
{
	int i,j,k;
	char t;
	j=strlen(s)-1;
	for(i=0,k=j;i<k;i++,k--)
	{
		t=s[i];
		s[i]=s[k];
		s[k]=t;
	}
}
