#include <stdio.h>
int main()
{
    int T, H, M;
    scanf("%d", &T);
    while(scanf("%d : %d", &H, &M)!=EOF)
    {
        H = 11-H + (M == 0);
        if(H <= 0)
        {
            H += 12;
        }
        if(M != 0)
        {
            M = 60-M;
        }
        printf("%02d:%02d\n", H, M);
    }
    return 0;
}
