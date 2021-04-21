#include<stdio.h>
int main()
{
    int p, n, k, t;
    int i;
    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d", &n, &p, &k);
        if ((n > k && n < p) || (n > p && n < k))
        {
            printf("Case %d: %d\n", i, n);
        }
        else if ((k > n && k < p) || (k < n && k > p))
        {
           printf("Case %d: %d\n", i, k);
        }
        else
        {
           printf("Case %d: %d\n", i, p);
        }

    }
    return 0;
}
