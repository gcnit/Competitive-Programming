#include<stdio.h>
#include<conio.h>
int main()
{
    int m,i,a,sum=0,c,e=26,j=0,k=0,b[50],l=0;
    char s[50][500],flag;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
       scanf("%s",&s[i][0]);
    }
    for(i=0;i<m;i++)
    {
        j=0;
    while(s[i][j]!='\0')
    {
        if(s[i][j]>64 &&s[i][j]<91)
        {
            s[i][j]=s[i][j]+32;
        }    
        j++;
    }    
    /*for(i=0;i<m;i++)
    {
       printf("%s\n",&s[i][0]);
    }*/
    /*while(j!='\0')
    {
        if(s[i][j]<96&&s[i][j]>123)
        s[i][j]='\0';
        j++;
    }*/
    j=0;
    l=0;
    while(s[i][j]!='\0')
    {
        if(s[i][j]>96&&s[i][j]<123)
        {
            k=0;
            c=0;
            flag=s[i][j];
            while(s[i][k]!='\0')
            {
                
                if(flag==s[i][k])
                {
                c++;
                s[i][k]=64;
                }   
                k++;
            }    
                b[l]=c;
                l++; 
        }    
    j++;
    }    
        for(j=0;j<=l;j++)
        {
            for(k=j+1;k<=l;k++)
            {
            if(b[k]>b[j])
            {
                c=b[k];
                b[k]=b[j];
                b[j]=c;
            }
            }    
        }
        sum=0;
        e=26;    
        for(k=0;k<l;k++)
        {
            sum=sum+b[k]*e;
            e--;
        }
            
     printf("case #%d:%d",i+1,sum);   
    }    
    getch();
    return 0;
}    
    
