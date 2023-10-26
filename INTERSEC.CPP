#include<iostream.h>
#include<conio.h>
void main()
{
int j,i,U[5]={1,2,3,4,5},A[5]={1,1,1,0,0},B[5]={0,0,1,1,1};
clrscr();
cout<<"intersection of A and B is:";
for(i=0;i<5;i++)
{
if( A[i]==1 && B[i]==1)
{
cout<<U[i];
}   }
cout<<"\n union of A and Bis:";
for(j=0;j<5;j++)
{
if(A[j]==1 || B[j]==1)
{
cout<<U[j];
}
}
getch();
}
