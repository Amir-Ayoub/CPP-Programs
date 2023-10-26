#include<iostream.h>
#include<conio.h>
void main()
{
int arr[4][4],r,c,i,j;
clrscr();
cout<<"enter the rows and columns of an array:";
cin>>r>>c;
cout<<"enter the elements of an array:";
for(i=0;i<r;i++)

for(j=0;j<c;j++)
{
cin>>arr[i][j];
}
cout<<"the given matrix:"<<endl;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
 cout<<arr[i][j]<<" ";
 }
 cout<<endl;
 }
 getch();
 }
