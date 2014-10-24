#include<stdio.h>
int main()
{
    int n,i,x[3],y[3],a,b,c,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d %d %d %d",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2]);
        a=((x[0]-x[1])*(x[0]-x[1]))+((y[0]-y[1])*(y[0]-y[1]));
        b=((x[2]-x[1])*(x[2]-x[1]))+((y[2]-y[1])*(y[2]-y[1]));
        c=((x[0]-x[2])*(x[0]-x[2]))+((y[0]-y[2])*(y[0]-y[2]));
        if((a+b-c)==0 || (a+c-b)==0 || (b+c-a)==0)
        count++;
    }
    printf("%d",count);
    return 0;
}
