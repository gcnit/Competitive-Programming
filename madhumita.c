#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main()
{
    long int num;
    int z=0,t,i=1,j;
    do
    { scanf("%d",&t);
        }while(t<0 || t >10);
        while(i<=t)
        {  do{
            scanf("%ld",&num);
             }while(num<0 || num>10000000);
             j=1;
             while(pow(5,j)<num)
             {

                 z+=num/pow(5,j);
                 j++;
             }
                printf("%d\n",z);
        i++;

        }
        return 0;
}
