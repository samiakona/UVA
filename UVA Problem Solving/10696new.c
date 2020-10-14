#include<stdio.h>
int main()
{
    long long int N,M;


   while(scanf("%lld",&N)!=EOF)
   {

    if (N==0)
    break;

    if(N>100)
    {
        M=N-10;
        printf("f91(%lld) = %lld\n",N,M);
    }
    else
    {
        printf("f91(%lld) = 91\n",N);
    }
   }

    return 0;
}
