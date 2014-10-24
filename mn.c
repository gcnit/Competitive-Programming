#include<stdio.h>
main()
{
int a[]={1,7,9,8};
int temp,i;
for(int i=0;i<4;i++)
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


