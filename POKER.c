#include<stdio.h>
#include<string.h>
int spades(int *b)
{
    int i,count=0;
    for(i=0;i<5;i++)
    if(b[i]==1)
    count++;
    return count;
}
int hearts(int *b)
{
    int i,count=0;
    for(i=0;i<5;i++)
    if(b[i]==2)
    count++;
    return count;
}
int diamonds(int *b)
{
    int i,count=0;
    for(i=0;i<5;i++)
    if(b[i]==3)
    count++;
    return count;
}
int clubs(int *b)
{
    int i,count=0;
    for(i=0;i<5;i++)
    if(b[i]==4)
    count++;
    return count;
}
int numbers(int *a)
{
    int i,j,c[14],pair=0,triplet=0,fourofakind=0;
    for(j=1;j<=13;j++)
    {
        c[j]=0;
        for(i=0;i<5;i++)
        {
            if(a[i]==j)
            c[j]++;
        }
    }
    for(i=1;i<=13;i++)
    {
        if(c[i]==2)
        pair++;
        if(c[i]==3)
        triplet++;
        if(c[i]==4)
        fourofakind++;
    }
    if(fourofakind)
    return 4;
    if(pair)
    {
        if(triplet)
        {
            return 5;
        }
        else if(pair==2)
        {
            return 1;
        }
        else return 2;
    }
    if(triplet)
    return 3;
    return 0;
}
int pair(int *a)
{
    if(numbers(a)==2)
    return 1;
    return 0;
}
int twopairs(int *a)
{
    if(numbers(a)==1)
    return 1;
    return 0;
}
int threeofakind(int *a)
{
    if(numbers(a)==3)
    return 1;
    return 0;
}
int straight(int *a)
{
    int i;
    for(i=0;i<4;i++)
    {
        if(a[i+1]-a[i]!=0)
        return 0;
    }
    return 1;
}
int flush(int *b)
{
    if((hearts(b)==5||spades(b)==5||clubs(b)==5||diamonds(b)==5))
    return 1;
    return 0;
}
int fullhouse(int *a)
{
    if(numbers(a)==5)
    return 1;
    return 0;
}
int fourofakind(int *a)
{
    if(numbers(a)==4)
    return 1;
    return 0;
}
int straightflush(int *a,int *b)
{
    if(straight(a)&&flush(b))
    return 1;
    return 0;
}
int royalflush(int *a,int *b)
{
    if(flush(b)&&(a[0]==1&&a[1]==10&&a[2]==11&&a[3]==12&&a[4]==13))
    return 1;
    else return 0;
}


int main()
{
    char s[5][3];
    int t,i,j,c,a[5],b[5];
    scanf("%d",&t);
    while(t>0)
    {
        for(i=0;i<5;i++)
        {
            scanf("%s",s[i]);
            if(s[i][0]=='A')
            a[i]=1;
            else if(s[i][0]=='K')
            a[i]=13;
            else if(s[i][0]=='Q')
            a[i]=12;
            else if(s[i][0]=='J')
            a[i]=11;
            else if(s[i][0]=='T')
            a[i]=10;
            else
            a[i]=s[i][0]-'0';
            if(s[i][1]=='S')
            b[i]=1;
            else if(s[i][1]=='H')
            b[i]=2;
            else if(s[i][1]=='D')
            b[i]=3;
            else if(s[i][1]=='C')
            b[i]=4;
        }
        for(j=0;j<5;j++)
        for(i=0;i<4;i++)
        {
            if(a[i+1]<a[i])
            {
                c=a[i];
                a[i]=a[i+1];
                a[i+1]=c;
                c=b[i];
                b[i]=b[i+1];
                b[i+1]=c;
            }
        }
        if(royalflush(a,b))
        printf("royal flush\n");
        else if(straightflush(a,b))
        printf("straight flush\n");
        else if(fourofakind(a))
        printf("four of a kind\n");
        else if(fullhouse(a))
        printf("full house\n");
        else if(flush(b))
        printf("flush\n");
        else if(straight(a))
        printf("straight\n");
        else if(threeofakind(a))
        printf("three of a kind\n");
        else if(twopairs(a))
        printf("two pairs\n");
        else if(pair(a))
        printf("pair\n");
        else printf("high card\n");
    }
    return 0;
}
