#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int a[100],size,i,max;
cout<<"enter the size of array:";
cin>>size;
cout<<"enter elements in array:";
for(i=0;i<size;i++)
{
cin>>a[i];
}

max=a[0];
for(i=0;i<size;i++)
{
if(a[i] > max);
{
max=a[i];
}
}
cout<<"maximum element is:"<<max;
getch();
}