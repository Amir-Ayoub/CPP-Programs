#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num,first=0,second=1,next,i;
cout<<"enter the no. of terms to be printed in fibonacci series : ";
cin>>num;
cout<<"Fibonacci serurs :"<<endl;

for(i=0;i<num;i++)
{
cout<<first<<endl;
next=first+second;
first=second;
second=next;
}
getch();
}