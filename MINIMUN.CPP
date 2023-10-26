#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int a[100],size,i,min;
cout<<"enter size of array:";
cin>>size;
cout<<"enter values in array:";
for(i=0;i<size;i++)
{
cin>>a[i];
}
min=a[0];
for(i=0;i<size;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
cout<<"minimum value of array is: "<<min;
getch();
}





