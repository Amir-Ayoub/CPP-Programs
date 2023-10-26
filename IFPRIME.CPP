#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,c=0;
clrscr();
cout<<"enter the number n:";
cin>>n;
for(i=1;i<=n;i++)
{
if(n%i==0)
{
c++;
}
}
if(c==2)
{
cout<<n<<" "<<"is a prime"<<endl;
}
else
{
cout<<n<<" "<<"is not prime"<<endl;
}
getch();
}