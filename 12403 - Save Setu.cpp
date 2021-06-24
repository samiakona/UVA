#include<iostream>
using namespace std;

using namespace std;

int main ()
{
    int T, O;

    cin>>T;

    long long sum=0;

    string k;


    while ( T-- )
    {
        cin>>k;
        if(k=="donate")
        {
            cin>> O;
            sum=sum+O;
        }
        else
        {
            cout<<sum<<endl;
        }
    }

    return 0;
}
