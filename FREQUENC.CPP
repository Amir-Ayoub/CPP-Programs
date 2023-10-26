#include<iostream.h>
#include<conio.h>
 void frequency(int arr[], int size)
 {
 int count,i,j;
 for(i=0;i<size;i++)
 {
 count=1;
 for(j=i+1;j<size;j++)
 {
 if(arr[i]==arr[j])
 {
 count++;
 arr[j]=-1;
 }
 }
 if(arr[i]!= -1)
 {
 cout<<"frequency of "<<arr[i]<<" is: "<<count<<endl;
 }
 }
 }
 int main()
 {
 clrscr();
 int arr[100],size;
 cout<<"enter size of array: ";
 cin>>size;
 cout<<"enter elements of array: ";
 for(int i=0;i<size;i++)
 {
 cin>>arr[i];
 }
 frequency(arr,size);
 getch();
 }







