#include<iostream.h>
#include<conio.h>
void main()
{
int i,n1,n2,min,hcf=1;
clrscr();

cout<<"enter any two numbers";
cin>>n1>>n2;

for(i=1;i<=min;i++)
{
 if(n1%i==0 && n2%i==0)
 {
    hcf=i;
    }
    }
     cout<<"hcf of" <<n1<<"and"<<n2<<"is" <<hcf;
getch();
}