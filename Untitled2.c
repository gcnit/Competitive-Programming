#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,i,n,W,x,flag,j,y,k;
    scanf("%lld",&t);
    while(t>0)
    {
        scanf("%lld",&n);
        for(i=1;;i++)
        {
            x=(long long int)pow(2,i);
            if(n==x)
            {
                printf("%lld\n",i-1);
                break;
            }
            flag=0;
            if(n%2!=0)
            for(j=1;;j++)
            {
                y=(long long int)pow(2,j);
                if(y*(x+1)==n)
                printf("%lld\n",i+j-1);
                       for(k=1;;k++)
                        {
                            if(pow(2,k)*(x+1)+(y+1)+1>n)
                            break;
                            if(pow(2,k)*(x+1)+(y+1)+1==n)
                            {
                            if(x>y)
                            printf("%lld\n",i+k);
                            else
                            printf("%lld\n",j+k);
                            flag=1;
                            break;
                            }
                        }
                        for(k=1;;k++)
                        {
                            if(pow(2,k)*(y+1)+(x+1)+1>n)
                            break;
                            if(pow(2,k)*(y+1)+(x+1)+1==n)
                            {
                            if(x>y)
                            printf("%lld\n",i+k);
                            else
                            printf("%lld\n",j+k);
                            flag=1;
                            break;
                            }
                        }
                        if(flag==1)
                        break;
            }
            if(flag==1)
            break;
            W=n/x;
            if(W==0)
            {
                printf("%lld\n",i-1);
                break;
            }
        }
        t--;
    }
    return 0;
}
