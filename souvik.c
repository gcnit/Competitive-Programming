#include<iostream.h>
#include<conio.h>
int main()
{
int i,j;
for(i=3; i>0; i--)
{
for(j=1;j<=(i*2)-1;j++)
{cout<<”*”;
}
cout<<"\n";
}
getch();
return 0;
}
