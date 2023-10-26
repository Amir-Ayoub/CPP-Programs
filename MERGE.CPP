#include<iostream.h>
#include<conio.h>
//merge function
void merge(int arr[],int l,int m, int r)
{
int i=l;
int j=m+1;
int k=l;

int n=(r-1)+1;
int temp[100];

while(i<=m && j<=r)
{
if( arr[i]<=arr[j])
{
temp[k]=arr[i];//arr[i] is smaller than arr[j]
i++;
k++;
}
else
{
temp[k]=arr[j];//arr[j] is smaller than arr[i]
j++;
k++;
}
}


while(i<=m)
{
temp[k]=arr[i];//copying all elements from left subarray
i++;
k++;
}

while(j<=r)
{
temp[k]=arr[j];//copying all elements from right subarray
j++;
k++;
}

for(int s=l;s<=r;s++)
{
arr[s]=temp[s];
}
}

//merge sort function
void mergeSort(int arr[],int l,int r)
{
if(l<r)
{
 int m= (l + r)/2;
 mergeSort(arr,l,m);
 mergeSort(arr,m+1,r);
 merge(arr,l,m,r);
 }
 }

int main()
{
clrscr();
int n,i,j,myarr[100];
cout<<"Enter number of elements : ";
cin>>n;
cout<<"Enter "<<n<<" element : ";
for(i=0;i<n;i++)
{
cin>>myarr[i];
}

cout<<"BEFORE MERGE SORT :"<<endl;
for(i=0;i<n;i++)
{
cout<<myarr[i]<<" ";
}
cout<<endl;

mergeSort(myarr,0,(n - 1));
cout<<"AFTER MERGE SORT :"<<endl;
for(i=0;i<n;i++)
{
cout<<myarr[i]<<" ";
}
getch();
}



