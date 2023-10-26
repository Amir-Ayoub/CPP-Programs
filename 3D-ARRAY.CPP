#include<iostream.h>
#include<conio.h>
void main()
{
int a[30][20][20],n,r,c,i,j,k;
clrscr();
cout<<"enter the number of rows:";
cin>>r;
cout<<"enter the number of columns:";
cin>>c;
cout<<"enter no. of times matrix:";
cin>>n;
cout<<"enter elements:"<<endl;
for(i=0;i<n;i++)
{
for(j=0;j<r;j++)
{
for(k=0;k<c;k++)
{
cin>>a[i][j][k];
} }}
cout<<"the given matrix is"<<endl;
for(i=0;i<n;i++)
{
for(j=0;j<r;j++)
{
for(k=0;k<c;k++)
{
 cout<<a[i][j][k]<<" ";
}
cout<<endl;
}
cout<<endl;
}
getch();
}


