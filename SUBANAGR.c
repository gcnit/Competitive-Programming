#include<stdio.h>
#define gc getchar
inline long long int scan() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  long long int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main()
{
    long long int t,i,j,k,l,x,min,count=0;
    t=scan();
    char A[t][110];
    long long int B[t][26];
    for(i=0;i<t;i++)
    {
        for(j=0;j<26;j++)
        B[i][j]=0;
        scanf("%s",A[i]);
        l=strlen(A[i]);
        for(j=0;j<l;j++)
        {
            x=A[i][j]-'a';
            B[i][x]++;
        }
    }
    for(i=0;i<26;i++)
    {
        for(j=0;j<t;j++)
        {
            if(B[j][i]==0)
            {
                min=0;
                break;
            }
            if(j==0)
            min=B[j][i];
            else if(min>B[j][i])
            min=B[j][i];
            if(j==t-1)
            {
                for(k=0;k<min;k++)
                printf("%c",i+'a');
            }
        }
        if(min==0)
        count++;
    }
    if(count==26)
    printf("no such string");
    printf("\n");
}
