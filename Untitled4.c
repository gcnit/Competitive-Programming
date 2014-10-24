#include <stdio.h>

int palin(int a)
{
	int b[6],c,i=0,j,k;
	int flag=1;
	c=a;
	while(c!=0)
	{
		b[i]=c%10;
		c=c/10;
		++i;
	}
	k=i-1;
	for(j=0;j<=i/2;j++)
	{
		if(b[j]!=b[k])
		{
			flag=0;
			break;
		}
		else
		{
			--k;
		}
	}
	return flag;
}

int reverse(int a)
{
	int b=a,k=0,n,l;
	l=log10(a);
	while(b!=0)
	{
		n=b%10;
		k+=n*pow(10,l);
		b=b/10;
		--l;
	}
	return k;
}

int main(void) {
	int t,k,count=0;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&k);
		while(1)
		{
		    printf("%d %d+%d=",count+1,k,reverse(k));
			k=k+reverse(k);
			printf("%d\n",k);
			if(palin(k)==0)
			{
				++count;
			}
			else
			break;
		}
		printf("%d %d\n",count+1,k);
	}
	return 0;
}
