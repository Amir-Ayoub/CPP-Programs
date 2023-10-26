#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,i,num[100];
clrscr();
cout<<"enter any number: ";
cin>>n;
cout<<"enter"<< " "<< n <<" "<<"values"<<endl;
for(i=0;i<n;i++)
{
cin>>num[i];
num[i]= pow(num[i],2);
}
cout<<"the squares are"<<endl;
for(i=0;i<n;i++)
{
cout<<num[i]<< " ";
}
getch();
}































