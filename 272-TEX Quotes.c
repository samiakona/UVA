#include<stdio.h>
int main()
{
    long int i=0;
    char k;
    while(scanf("%c", &k)!=EOF)
    {
        if(k=='"')
        {
            if(i%2==1)
            {
                printf("''");
            }
            else if(i%2==0)
            {
                printf("``");
            }
            i++;
        }
        else
        {
            printf("%c",k);
        }
    }
    return 0;
}
