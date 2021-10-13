#include<bits/stdc++.h>

using namespace std;
int main()
{
    double area, s, Ma, Mb, Mc;

    while (scanf("%lf%lf%lf", &Ma, &Mb, &Mc) == 3)
    {
        s = (Ma + Mb + Mc)/2.0;

        area = (4.0/3.0)*(sqrt(s*(s-Ma)*(s-Mb)*(s-Mc)));

        if(area>0)
        {
            printf ("%0.3lf\n", area);
        }
        else
        {
            printf("-1.000\n");
        }
    }

    return 0;
}
