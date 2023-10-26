#include<iostream.h>
#include<conio.h>
void main()
{
int n,marks[5];
float sum=0,avg,per;
clrscr();
cout<<"enter your marks";
for(n=0;n<5;n++)
{
cin>>marks[n];
sum=sum+marks[n];
}
avg=sum/5;
per=(sum/500)*100;


cout<<"\n average marks ="<<avg;
cout<<"\n percentage ="<<per;
getch();
}