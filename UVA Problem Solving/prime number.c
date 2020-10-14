/*#include<stdio.h>
int main()
{
    int i, num, p=0;
    scanf("%d\n", &num);
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            p++;
        }
    }
    if (p==0)
    {
        printf("enter the number %d and it is prime number\n",num);
    }

    else
    {
        printf("enter the number %d and it is not prime number\n",num);
    }


    return 0;

}*/
#include <stdio.h>
int main()
{
    int i, num, p = 0;

    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            p++;
        }
    }
    if(p==2)
    {
        printf("Number %d and it is a prime number",num);
    }
    else
    {
        printf("Number %d and it is not a prime number",num);
    }

    return 0;
}
