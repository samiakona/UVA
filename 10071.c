#include<stdio.h>
int main()
{
    int s, v, t;

    while(scanf("%d %d", &v, &t)!=EOF)
    {
        s= v*(t*2);
        printf("%d\n", s);
    }

    return 0;
}
