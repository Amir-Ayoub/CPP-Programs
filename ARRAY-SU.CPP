#include<iostream.h>
#include<conio.h>
void main()
{
int r,c;
clrscr();
cout<<"enter number of rows:";
cin>>r;
cout<<"enter number of columns:";
cin>>c;
int arr1[2][2];

int i,j;
cout<<"enter elements of array:";
for(i=0;i<r;i++)
for(j=0;j<c;j++)
cin>>arr1[i][j];


for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<arr1[i][j]<<" ";
}
cout<<endl;
}
int arr2[2][2]={1,2,3,4};
for(i=0;i<2;i++)
for(j=0;j<2;j++)

cout<<arr2[i][j]<<" ";
cout<<endl;


int arr3[2][2];
for(i=0;i<2;i++)
for(j=0;j<2;j++)
arr3[i][j]=arr1[i][j]+arr2[i][j];
		{
for(i=0;i<2;i++)
for(j=0;j<2;j++)
cout<<arr3[i][j]<<endl;
		 }
getch();
}






