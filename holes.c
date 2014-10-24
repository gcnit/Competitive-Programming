#include<stdio.h>
int main()
{
char a[100];
int i,count=0,t,j;
scanf("%d",&t);
for(j=0;j<t;j++)
{
scanf("%s",a);
count=0;
for(i=0;a[i]!='\0';i++)
switch(a[i])
{
    case 'B':
        count+=2;
        break;
    case 'A':
    case 'D':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
        count++;
        break;
    default:
        break;
}
printf("%d\n",count);
}
return 0;
}
