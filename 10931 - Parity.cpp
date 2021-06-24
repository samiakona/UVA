#include<iostream>
using namespace std;
main()
{
    int n,i,cnt=0;
    string a;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        for(i=0; n>0; i++)
        {
            a[i]=n%2;
            n=n/2;
        }
        printf("The parity of ");
        for(i=i-1; i>=0; i--)
        {

            if(a[i]==1)
                cnt++;
            printf("%d",a[i]);
        }
        printf(" is %d (mod 2).\n",cnt);
        cnt=0;

    }

    return 0;
}
