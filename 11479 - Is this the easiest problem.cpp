#include<iostream>
using namespace std;
int main()
{
    long long int a, b, c;
    int T;
    cin >> T;
    for(int i=1; i<=T; i++)
    {
        cin >> a >> b >>c;
        if(a+b>c && b+c>a && c+a>b)
        {
            if(a==b && b==c)
            {
                printf("Case %d: Equilateral\n",i);
            }
            else if(a==b||b==c||a==c)
            {
                printf("Case %d: Isosceles\n",i);
            }
            else if(a!=b||b!=c||c!=a)
            {
                printf("Case %d: Scalene\n",i);
            }
        }
        else
        {
            printf("Case %d: Invalid\n",i);
        }

    }
    return 0;
}
