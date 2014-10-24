#include<stdio.h>
int main()
{
int i=0;
char s[1000][1000];
while(s[i]!=EOF)
{
scanf("%s",s[i++]);
}
while(i--)
{
if(s[0]=='\"' && s[1]=='C')
printf("s\n");
}
}
