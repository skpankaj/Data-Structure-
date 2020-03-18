 
#include<iostream.h>
#include<conio.h>
void main()
{
unsigned int nvalue;
char source='l',intermediate='c',destination='r';
clrscr();
void hanoi(unsigned int,char,char,char);
cout<<"enter no of disk";
cin>>nvalue;
cout<<"tower of hanoi problem with....."<<nvalue<<"disk"<<endl;
hanoi(nvalue,source,intermediate,destination);
getch();
}
void hanoi(unsigned n,char left,char mid, char right)
{
if(n!=0)
{
hanoi(n-1,left,right,mid);
cout<<" move disk "<<n<<" from "<<left<<" to "<<right<<endl;
hanoi(n-1,mid, left,right);
}
}
