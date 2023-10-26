#include<iostream.h>
#include<conio.h>
void main()
{
 int a[3]={1,2,3},b[4]={4,5,6,7},i,j;
 clrscr();
/* cout<<"\n the elements of array A are:";
   for(i=0;i<=2;i++)
cout<<a[i]<<" " ;
cout<<"\n the elements of array B are:";
for(j=0;j<=3;j++)
cout<<b[j]<<" " ;
	   */
cout<<"\n the cartessian product of A and B=";
cout<<"{";
	      for(i=0;i<=2;i++)
	      {
	      for(j=0;j<=3;j++)
  {
      cout<<"("<<a[i]<<","<< b[j]<<")";

      cout<<"," ;
       }	      }


      cout<<"}";


getch();
}