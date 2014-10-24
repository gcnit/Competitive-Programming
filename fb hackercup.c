#include<stdio.h>
#include<string.h>
void quick(int *b,int lb,int ub)
{
if(lb>=ub)
return;
int d=b[lb],i=lb,j,c;
for(j=lb+1;j<=ub;j++)
{
    if(b[j]<d)
    {
        i++;
        c=b[i];
        b[i]=b[j];
        b[j]=c;
    }
}
c=b[i];
b[i]=b[lb];
b[lb]=c;
quick(b,lb,i-1);
quick(b,i+1,ub);
}

int main()
{
char s[510],ch;
int a[27],i,n,j,k,c,l,b[27],q,swapped,sum,x=1;
scanf("%d",&n);
for(j=0;j<n;j++)
{
scanf("\n%[^\n]s",s);
for(i=0;i<26;i++)
a[i]=0;
q=strlen(s);
for(i=0;i<q;i++)
{
ch=s[i];
switch(ch)
{
    case 'a':
    case 'A':
    a[0]++;
    break;
    case 'b':
    case 'B':
    a[1]++;
    break;
    case 'c':
    case 'C':
    a[2]++;
    break;
    case 'd':
    case 'D':
    a[3]++;
    break;
    case 'e':
    case 'E':
    a[4]++;
    break;
    case 'f':
    case 'F':
    a[5]++;
    break;
    case 'g':
    case 'G':
    a[6]++;
    break;
    case 'h':
    case 'H':
    a[7]++;
    break;
    case 'i':
    case 'I':
    a[8]++;
    break;
    case 'j':
    case 'J':
    a[9]++;
    break;
    case 'k':
    case 'K':
    a[10]++;
    break;
    case 'l':
    case 'L':
    a[11]++;
    break;
    case 'm':
    case 'M':
    a[12]++;
    break;
    case 'n':
    case 'N':
    a[13]++;
    break;
    case 'o':
    case 'O':
    a[14]++;
    break;
    case 'p':
    case 'P':
    a[15]++;
    break;
    case 'q':
    case 'Q':
    a[16]++;
    break;
    case 'r':
    case 'R':
    a[17]++;
    break;
    case 's':
    case 'S':
    a[18]++;
    break;
    case 't':
    case 'T':
    a[19]++;
    break;
    case 'u':
    case 'U':
    a[20]++;
    break;
    case 'v':
    case 'V':
    a[21]++;
    break;
    case 'w':
    case 'W':
    a[22]++;
    break;
    case 'x':
    case 'X':
    a[23]++;
    break;
    case 'y':
    case 'Y':
    a[24]++;
    break;
    case 'z':
    case 'Z':
    a[25]++;
    break;
    default:
    break;
}
}
l=0;
for(k=0;k<26;k++)
if(a[k]!=0)
{
    b[l]=a[k];
    l++;
}
quick(b,0,l-1);
sum=0;
for(k=0;k<l;k++)
sum+=b[k]*(27-l+k);
printf("Case #%d: %d\n",x,sum);
x++;
}
return 0;
}
