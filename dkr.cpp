#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>

using namespace std;

char a[100005];
int d[100005];
int c[65];
int m[65];
int q[65];

int main()
{
    int i,s,j,front,back,y;
    front=back=-1;
    gets(a);
    s=strlen(a);
    //printf("s=%d\n",s);
    for(i=0;i<=s;i++)
    {
        d[i]=i;
    }
    for(i=40;i<=60;i++)
    {
        c[i]=0;
        m[i]=10000000;
    }

    m[(int)a[0]]=0;
    back++;
    q[back]=(int)a[0];
    c[(int)a[0]]=1;

    while(front<back)
    {
        front++;
        y=q[front];
       printf("y=%d\n",y-48);
        for(i=0;i<s;i++)
        {
            if((int)a[i]==y)
            {
                //printf("i=%d y=%dn",i,y);
                if((i==0)&&(i!=s-1))
                d[i]=min(d[i],min(m[y]+1,d[i+1]+1));
                else if((i==s-1)&&(i!=0))
                d[i]=min(d[i],min(m[y]+1,d[i-1]+1));
                else if(s!=1)
                d[i]=min(d[i],min(m[y]+1,min(d[i-1]+1,d[i+1]+1)));

                if(d[i]<m[y])
                {
                    m[y]=d[i];
                }


                if(i>0)
                {
                        d[i-1]=min(d[i-1],min(d[i]+1,m[(int)a[i-1]]+1));
                        m[(int)a[i-1]]=min(d[i-1],m[(int)a[i-1]]);
                        if(c[(int)a[i-1]]==0)
                        {
                            back++;
                            q[back]=(int)a[i-1];
                        }
                        c[(int)a[i-1]]=1;
                }
                if(i+1<s)
                {
                        d[i+1]=min(d[i+1],min(d[i]+1,m[(int)a[i+1]]+1));
                        m[(int)a[i+1]]=min(d[i+1],m[(int)a[i+1]]);
                        if(c[(int)a[i+1]]==0)
                        {
                            back++;
                            q[back]=(int)a[i+1];
                        }
                        c[(int)a[i+1]]=1;
                }
            }
        }
    }
    //d[0]=min(d[0],min(m[(int)a[0]+1],d[1]+1));
    //for(i=1;i<s-1;i++)
    //d[i]=min(d[i],min(d[i+1]+1,min(d[i-1]+1,m[(int)a[i]]+1)));
    //if(s!=1)
    //d[s-1]=min(d[s-1],min(d[s-2],m[(int)a[i]]+1));
    //for(i=0;i<s;i++)
    //printf("%d ",d[i]);
    //printf("\n");
    printf("%d\n",d[s-1]);
    return 0;
}
