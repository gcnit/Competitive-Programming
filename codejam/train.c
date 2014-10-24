#include<stdio.h>
int main()
{
    long long int t,i,j,k,l,y,n,l1[200],a[30],flag,m,q;
    char s[200][200],x[200][200];
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        for(j=0;j<n;j++)
        {
            scanf("%s",s[j]);
            l=strlen(s[j]);
            x[j][0]=s[j][0];
            y=1;
            for(k=1;k<l;k++)
            if(s[j][k]!=s[j][k-1])
            {
                x[j][y]=s[j][k];
                y++;
            }
            x[j][y]='\0';
            l1[j]=strlen(x[j]);
        }
        for(j=0;j<26;j++)
        a[j]=0;
        flag=0;
        for(j=0;j<n && flag==0;j++)
        {
            for(m=0;m<l1[j] && flag==0;m++)
            {
                for(k=0;k<n && flag==0;k++)
                {
                    for(q=0;q<l1[k] && flag==0;q++)
                    {
                        if(j==k && m==q);
                        else
                        {
                            if((m==0 && q==(l1[k]-1))||(q==0 && m==(l1[j]-1)));
                            else
                            if(x[j][m]==x[k][q])
                            {
                                flag=1;
                                break;
                            }
                        }
                    }
                }
            }

        }
        if(flag=0)
        for(j=0;j<n;j++)
        {
            if(l1[j]==1)
            {
                b[x[j][0]-'a']++;
            }
            c[x[j][0]-'a']++;
            d[x[j][l1[j]-1]-'a']++;
        }
        z=n;
        for(j=0;j<26;j++)
        {
            if(c[j]>1 || d[j]>1)
            {
                flag=1;
            }
        }
        p=0;
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(x[j][l1[j]-1]==x[k][0])
                for(m=0;m<l1[j];m++)
                {
                        z[o][p]=x[j][m];
                        p++;
                }
            }


                }
        if(flag==1)
        printf("0\n");
        else if(flag==0)
        for(j=0;j<26;j++)
        printf("%lld %lld\n",j,a[j]);
    }
    return 0;
}
