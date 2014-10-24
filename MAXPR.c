#include<stdio.h>
int N, DP[256][256], A[256];
int main()
{
   int t, res;
   scanf("%d",&t);
   while(t--)
   {
      memset(DP, 0, sizeof(DP));
      scanf("%d",&n);
      for(int i = 0; i < n; i++)
         scanf("%d",&A[i]);
      res = n;
      for(int j = 1; j <=100; j++)  {
            for(int i = 1; i < n; ++i) {
            {
                int diff = A[i]-j;
                if(diff<0)
                DP[200+diff]=1;
                else
                DP[diff]=1;
            }

        }
               if(DP[i][j] >= MOD) DP[i][j] -= MOD;
            }
            res += DP[i][j];
            if(res >= MOD) res -= MOD;
         }
      }
      printf("Case %d: %d\n",tc, res);
   }
   return 0;
}
