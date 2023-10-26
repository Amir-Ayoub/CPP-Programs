#include<iostream.h>
#include<conio.h>

int stack[10];
int top=-1;
void push(int *top,int c);
void pop(int *top);
void show(int *top);

void main()
{
clrscr();
int c;
while(1)
{
cout<<"Enter an operation"<<endl;
cout<<"1.Push"<<endl;
cout<<"2.pop"<<endl;
cout<<"3.show"<<endl;
cin>>c;

if(c==1)
{
cout<<"enter elements to push :";
cin>>c;
push(&top,c);
}
else if(c==2)
{
pop(&top);
}
else if(c==3)
{
show(&top);
}
else
cout<<"invalid statement";
}
}


void push(int*top,int c)
{
if(*top==9)
{
cout<<"Error : stack overflow"<<endl;
return;
}
stack[++(*top)]=c;
cout<<"Pushed"<<c<<"onto the stack"<<endl;
}

void pop(int *top)
{
if(*top== -1)
{
cout<<"Error: stack underflow"<<endl;
return;
}

int num=stack[(*top)--];
cout<<"Popped"<<num<<"from the stack"<<endl;
}

void show(int *top)
{
if(*top== -1)
{
cout<<"stack is empty"<<endl;
return;
}

cout<<"current stack : ";
for(int i=0;i< *top;i++)
{
cout<<stack[i]<< " ";
}
cout<<endl;
}









