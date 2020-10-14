#include<stdio.h>
int main()
{
    int m, n, y;
    while(scanf("%d %d", &m, &n)!=EOF)
    {
        y=(m*n)-1;
        printf("%d\n",y);
    }
    return 0;
}
