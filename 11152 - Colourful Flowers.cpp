#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double sun, rose, violets,triangleArea,radiousofCircumcircle;
    double a, b, c;
    double s, r1, r2;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        double PI = acos(-1);

        s =(a+b+c)/2;

        triangleArea = sqrt(s*(s-a)*(s-b)*(s-c));

        r1 = triangleArea/s;

        rose = PI*r1*r1;

        violets = triangleArea - rose;

        radiousofCircumcircle = (a*b*c)/sqrt(2*s*(b+c-a)*(c+a-b)*(a+b-c));

        r2 = PI*radiousofCircumcircle*radiousofCircumcircle;

        sun = r2 - triangleArea;

        printf("%.4lf %.4lf %.4lf\n", sun, violets, rose);
    }

    return 0;
}
