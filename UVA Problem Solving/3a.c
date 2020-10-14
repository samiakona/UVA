/*#include <stdio.h>

void main()
{
    int i, num, odd_sum = 0, even_sum = 0;

    printf("Enter the value of num\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            even_sum = even_sum + i;
        else
            odd_sum = odd_sum + i;
    }
    printf("Sum of all odd numbers  = %d\n", odd_sum);
    printf("Sum of all even numbers = %d\n", even_sum);
}
*/

#include<stdio.h>
int main()
{
    int a[1000];
    int i;
    int X;
    int Y;
    int odd;
    scanf("%d %d", &X, &Y);
    for(i=X; i<=Y; i++);
    {
        if(i%3==0 && i%5==0)
        odd+=a[i];
    }
    printf("odd number = %d",odd);
    return 0;
}














