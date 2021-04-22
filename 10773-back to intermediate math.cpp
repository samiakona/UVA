#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,tc;
    double T1, T2, Time;
    double d, v, u;
    cin>> tc;
    for(i=1; i<=tc; i++)
    {
        cin>> d >> v >> u;
        if(v>=u || u==0 || v==0)
        {
            printf("Case %d: can't determine\n",i);
            continue;
        }
        T1=d/u;
        T2= d/sqrt(u*u-v*v);
        Time = abs(T2-T1);
        printf("Case %d: %.3lf\n", i, Time);
    }
    return 0;
}
