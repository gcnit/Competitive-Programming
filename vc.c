#include<stdio.h>
main()
{
int temp,i;
int a[]={2,6,1,8};
int big=a[0];
for(i=1;i<4;i++)
{if(a[i]>a[0])
{a[i]=temp;
a[i]=a[0];
a[0]=temp;
}
}
for(i=2;i<4;i++)
{if(a[i]>a[1])
{a[i]=temp;
a[i]=a[1];
a[1]=temp;
}
}
printf("%d", temp);
}
