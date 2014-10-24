#include<stdio.h>
#include<string.h>
using namespace std;
char a[1000005];
int main()
{
    int t,i,n,s,x1,y1,z1;
    char z;
    scanf("%d",&t);
    int c[150];
    while(t--)
    {
        scanf("%d",&n);
        char b[n][2];
        for(i=30;i<=130;i++)
        c[i]=i;
        getchar();
        for(i=0;i<n;i++)
        {
            scanf("%c%c%c",&b[i][0],&z,&b[i][1]);
            if(c[(int)b[i][0]]==(int)b[i][0])
            {
                c[(int)b[i][0]]=(int)b[i][1];
            }
            getchar();
        }
        //for(i=0;i<n;i++)
        //printf("sam %c %c\n",b[i][0],b[i][1]);
        //printf("dsasda\n");
        scanf("%s",&a);
        s=strlen(a);
        //printf("s=%d\n",s);
        for(i=0;i<s;i++)
        {
            if(c[(int)a[i]]!=(int)a[i])
            a[i]=(char)c[(int)a[i]];
        }
        x1=-1;y1=-1;z1=-1;
        for(i=0;i<s;i++)
        {
            if((a[i]!='0')&&(a[i]!='.'))
            {
                x1=i;
                break;
            }
            else if(a[i]=='.')
            {
                x1=i;
                y1=i;
                break;
            }
        }
        if(i==s)
        {
            printf("0\n");
            continue;
        }
        for(i=x1;i<s;i++)
        {
            if(a[i]=='.')
            {
                y1=i;
                break;
            }
        }
        if(y1==-1)
        {
            y1=x1;
            z1=x1;
        }
        else
        {
           z1=y1;
           for(i=s-1;i>y1;i--)
           {
               if(a[i]!='0')
               {
                  z1=i;
                  //printf("ghhhz1=%d\n",z1);
                  break;
               }
           }
           if((z1==y1)&&(x1==y1))
           {
               printf("0\n");
               continue;
           }
           else if(z1==y1)
           z1=y1-1;
        }
        //printf("x1=%d y1=%d z1=%d\n",x1,y1,z1);
        for(i=x1;i<=z1;i++)
        printf("%c",a[i]);
        printf("\n");
        //printf("aa%s\n",&a);
    }
    return 0;
}
