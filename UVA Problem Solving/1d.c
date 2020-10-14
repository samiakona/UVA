#include<stdio.h>
int main()
{
    int m, n;
    m=5;
    n=6;
    m++;
    if (m++==n)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }
    printf("m=%d n=%d",m,--n);
    return 0;
}
