/*#include <stdio.h>
int main()
{
    int T, H1, H2, M1, M2, K, H, M, L, t, i;
    char  ch,
    while (scanf("%d", &T)!=EOF)


        /*for (t = 1; t <= T; t++)
        {
            scanf("%d%d %c %d%d", &K, &H, &M);
            int K = H * 60 + M;
            for (i = 1; i <= K; i++)
            {
                scanf("%d%d %c %d%d", &H, &M, &L);
                // if miss the bus he only can take it in the next day.
                if (M2<M1)
                {
                    M2+60-M1;
                }
                else
                {
                    M2-M1;
                }
                if (H2>H1)
                {
                    (H2+24-(H1+1))*60;
                }
                else H2-H1;
            }
            printf("Case %d %c %d\n", t );

    return 0;
}*/

#include<stdio.h>

int main ()
{
    int t, i ,h1,m1 ,h2,m2, H, M, j, k;
    char ch ,ch2 ;
    scanf("%d", &t);
    while (t--)
    scanf("%d%d %c %d%d", &h1, &m1, &ch);

    for (i=1 ; i<=t ; i++)
    {
        scanf("%d%d %c %d%d", &h1, &m1, &ch);

        H=(h1*60)+m1 ;

        for (j=1 ; j<=k ; j++)
        {
          scanf("%d%d %c %d%d", &h2, &m2, &ch2);

           if (m2<m1)
               M=m2+60-m1;
           else m2-m1;

            if (h2>h1)
                H=(h2+24-(h1+1))*60;

           else H=h2-h1;
        }
         printf("Case : %d", i,j);
    }

    return 0 ;
}
