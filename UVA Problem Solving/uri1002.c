#include<stdio.h>
#include<math.h>
int main()
{
    double A, R;
    double n=3.14159;

    scanf("%lf", &R);
    //scanf("%lf", &n);

    A= n*(R*R);

    printf("A = %.4lf\n", A);
    return 0;
}
