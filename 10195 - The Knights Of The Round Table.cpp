#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c;
    double A, S,r;
    while (scanf("%lf %lf %lf", &a, &b, &c)==3)
    {
        S=(a+b+c)/2;
        if(S==0)
        {
            printf("The radius of the round table is: 0.000\n");
        }
        else if(S>0)
        {
            A=sqrt(S*(S-a)*(S-b)*(S-c));
            r= A/S;
            printf("The radius of the round table is: %0.3lf\n",r);
        }

    }

    return 0;
}
