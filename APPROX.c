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
    long long int i,t,K;
	t=scan();
	while(t--)
	{
	    long long int a = 103993, b = 33102;
		K=scan();
		for (i = 0; i <= K; i++)
		{
			printf("%lld", a / b);
			if (i == 0 && K > 0)
            printf(".");
			a = a % b * 10;
		}
		printf("\n");
	}
	return 0;
}
