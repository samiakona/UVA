#include<iostream>
using namespace std;
int main()
{
    int i,t,ar[10],k,j,mid,temp;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>k;
        for(j=0; j<k; j++)
        {
            cin>>ar[j];
            if (j == k / 2)
                cout << "Case " << i << ": " << ar[j] << '\n';
        }

    }
    return 0;
}
