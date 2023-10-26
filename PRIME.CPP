#include<iostream.h>
#include<conio.h>
void main()
{
int n,div;
clrscr();
 cout<<"Enter the number:";
 cin>>n;
 for(div=2;div<n;div++)
 { if(n%div==0)
 {
   cout<<n<<" " <<"is not prime";
   break;
   }}
   if(div==n)
   {
   cout<<n<<" "<<"is prime";
   }
   getch();
   }
