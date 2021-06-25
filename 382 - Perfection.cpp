#include<iostream>
using namespace std;
int main()
{
    int i;
    int k;
    cout << "PERFECTION OUTPUT"<<endl;
    while(cin>>k && k!=0)
    {
        int sum=0;
        for(i=1; i<=k/2; i++)
        {
            if(k%i==0)
                sum+=i;
        }
        if (sum>k)
        {
            printf("%5d  ABUNDANT\n",k);
        }
        else if(sum==k)
        {
            printf("%5d  PERFECT\n",k);
        }
        else if(sum<k)
        {
            printf("%5d  DEFICIENT\n",k);
        }
    }
    cout << "END OF OUTPUT"<<endl;
    return 0;

}
