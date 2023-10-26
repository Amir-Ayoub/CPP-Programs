#include<iostream.h>
#include<conio.h>
void main()
{

int s[10],i;
clrscr();
 cout<<"\n Enter array elements:"<<endl;
 for(i=0;i<=9;i++)
 cin>>s[i];
 cout<<"\n Elements of array are:"<<endl;
 for(i=9;i>=0;i--)
 cout<<"\t"<<s[i];

 getch();
 }