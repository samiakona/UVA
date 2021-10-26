#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    char N[25];
    long int l, M, K,i, j;
    int cnt, sum;

    while(scanf("%s",N)!=EOF)
    {
        l=strlen(N);
        cnt=0;
        sum=0;
        for(i=0; i<l; i++)
        {
            if(N[i]>=97 && N[i]<=122)
            {
                M = N[i]-96;
            }
            if(N[i]>=65 && N[i]<=90)
            {
                M=N[i]-38;
            }
            sum=sum+M;
        }

        K= sqrt(sum);
        for(j=1; j<=K; j++)
        {
            if(sum%j!=0)
            {
                cnt++;
            }
        }
        if(cnt==1)
        {
            printf("It is a prime word.\n");
        }
        else
        {
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}
