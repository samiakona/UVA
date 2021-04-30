#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    double u, v, t, a, s;
    int T=1;
    while(cin >> n && n!=0)
    {
        if(n==1)
        {
            cin >> u >> v >> t;

            s=(u+v)*t/2;
            a=(v-u)/t;

            printf("Case %d: %.3lf %.3lf\n",T,s,a);
        }
        else if(n==2)
        {
            cin >> u >> v >> a;

            t=(v-u)/a;
            s=(u+v)*t/2;

            printf("Case %d: %.3lf %.3lf\n",T,s,t);
        }
        else if(n==3)
        {
            cin >> u >> a >> s;

            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;

            printf("Case %d: %.3lf %.3lf\n",T,v,t);
        }
        else if(n==4)
        {
            cin >> v >> a >> s;

            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;

            printf("Case %d: %.3lf %.3lf\n",T,u,t);
        }
        T++;
    }
    return 0;
}
