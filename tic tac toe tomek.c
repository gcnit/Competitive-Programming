#include<stdio.h>
int main()
{
    int T,i,j,k,x,count;
    char a[5],b[5],c[5],d[5];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        x=0;
        for(j=0;j<16;j+=4)
        scanf(" %c %c %c %c",&a[j],&a[j+1],&a[j+2],&a[j+3]);
        for(j=0;j<16;j+=4)
        {
            count=0;
            if(a[j]!='.')
            {
            if(a[j]==a[j+1])
            count++;
            if(a[j]==a[j+2])
            count++;
            if(a[j]==a[j+3])
            count++;
            if(count==3 || count==2 && (a[j]=='T' || a[j+1]=='T' || a[j+2]=='T' || a[j+3]=='T'))
            {
                printf("Case #%d: %c won\n",i+1,a[j]);
                x=1;
                break;
            }
            }
        }
        if(x==0)
        for(j=0;j<4;j++)
        {
            count=0;
            if(a[j]!='.')
            {
            if(a[j]==a[j+4])
            count++;
            if(a[j]==a[j+8])
            count++;
            if(a[j]==a[j+12])
            count++;
            if(count==3 || count==2 && (a[j]=='T' || a[j+4]=='T' || a[j+8]=='T' || a[j+12]=='T'))
            {
                printf("Case #%d: %c won\n",i+1,a[j]);
                x=1;
                break;
            }
            }
        }
        count=0;
        if(x==0)
        {
            if(a[0]!='.')
            {
            if(a[0]==a[5])
            count++;
            if(a[0]==a[10])
            count++;
            if(a[0]==a[15])
            count++;
            if(count==3 || count==2 && (a[0]=='T' || a[5]=='T' || a[10]=='T' || a[15]=='T'))
            {
                printf("Case #%d: %c won\n",i+1,a[0]);
                x=1;
            }
            }
        }
        count=0;
        if(x==0)
        {
            if(a[3]!='.')
            {
            if(a[3]==a[6])
            count++;
            if(a[3]==a[9])
            count++;
            if(a[3]==a[12])
            count++;
            if(count==3 || count==2 && (a[3]=='T' || a[6]=='T' || a[9]=='T' || a[12]=='T'))
            {
                printf("Case #%d: %c won\n",i+1,a[3]);
                x=1;
            }
            }
        }
        if(x==0)
        {
            for(j=0;j<15;j++)
            if(a[j]=='.')
            {
                printf("Case #%d: Game has not completed\n",i+1);
                x=1;
                break;
            }
        }
        if(x==0)
        printf("Case #%d: Draw\n",i+1);
    }
    return 0;
}
