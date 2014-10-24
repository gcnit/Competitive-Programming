#include<stdio.h>
#include<string.h>
char s[100005];
int d[100005];
int c[65];
int m[65];
int q[65];
int min(int a,int b)
{
    if(a<b) return a;
     else return b;
}
int main()
{
    int i,j,front=-1,back=-1,y,l;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        d[i]=i;
    }
    for(i=0;i<=10;i++)
    {
        c[i]=0;
        m[i]=10000000;
    }
    m[s[0]-'0']=0;
    back++;
    q[back]=s[0]-'0';
    c[s[0]-'0']=1;
    while(front<back)
    {
        front++;
        y=q[front];
        for(i=0;i<l;i++)
        {
            if(s[i]-'0'==y)
            {
                if(l!=1)
                {
                    if(i==0)
                    d[i]=min(d[i],min(m[y]+1,d[i+1]+1));
                    else if(i==l-1)
                    d[i]=min(d[i],min(m[y]+1,d[i-1]+1));
                    else
                    d[i]=min(d[i],min(m[y]+1,min(d[i-1]+1,d[i+1]+1)));
                }
                if(d[i]<m[y])
                {
                    m[y]=d[i];
                }

                if(i>0)
                {
                        d[i-1]=min(d[i-1],min(d[i]+1,m[s[i-1]-'0']+1));
                        m[s[i-1]-'0']=min(d[i-1],m[s[i-1]-'0']);
                        if(c[s[i-1]-'0']==0)
                        {
                            back++;
                            q[back]=s[i-1]-'0';
                            c[s[i-1]-'0']=1;
                        }
                }
                if(i<l-1)
                {
                        d[i+1]=min(d[i+1],min(d[i]+1,m[s[i+1]-'0']+1));
                        m[s[i+1]-'0']=min(d[i+1],m[s[i+1]-'0']);
                        if(c[s[i+1]-'0']==0)
                        {
                            back++;
                            q[back]=s[i+1]-'0';
                            c[s[i+1]-'0']=1;
                        }
                }
            }
        }
    }
    printf("%d\n",d[l-1]);
    return 0;
}
