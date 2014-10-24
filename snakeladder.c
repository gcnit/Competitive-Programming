#include<stdio.h>
int main()
{
    int t,n,i,j,flag,C,D,m,r;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d %d %d",&n,&m,&r);
        int A[m][2],B[r];
        for(i=0;i<m;i++)
        scanf("%d %d",&A[i][0],&A[i][1]);
        for(j=0;j<m;j++)
        {
            for(i=0;i<m;i++)
            {
                if(A[j][1]==A[i][0])
                A[j][1]=A[i][1];
            }
        }
        C=1,D=1;
        flag=1;
        for(i=0;i<r;i++)
        {
            scanf("%d",&B[i]);
            if(C<n && D<n)
            {
            if(flag==1)
            {
                if(C+B[i]<=n)
                {
                    C+=B[i];
                    for(j=0;j<m;j++)
                    {
                        if(C==A[j][0])
                        {
                            C=A[j][1];
                            flag=1;
                            if(C==D)
                            D--;
                            break;
                        }
                        if(C==D)
                        D--;
                        if(B[i]==6||C==D)
                        flag=1;
                        else
                        flag=0;
                    }
                }
            }
            else
            {
                if(D+B[i]<=n)
                {
                    D+=B[i];
                    for(j=0;j<m;j++)
                    {
                        if(D==A[j][0])
                        {
                            D=A[j][1];
                            flag=0;
                            if(C==D)
                            C--;
                            break;
                        }
                        if(C==D)
                        C--;
                        if(B[i]==6||C==D)
                        flag=0;
                        else
                        flag=1;
                    }
                }
            }
        }
        }
        if(C==n)
        printf("1 %d %d\n",C,D);
        else if(D==n)
        printf("2 %d %d\n",C,D);
        else
        printf("0 %d %d\n",C,D);
        t--;
    }
return 0;
}
