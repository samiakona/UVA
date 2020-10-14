#include <stdio.h>

int main()
{
    int i, n, odd_sum = 0; even=0;

    printf("Enter the value of num\n");
    scanf("%d %d", &i, n);
    for (i = 5; i <= n; i++)
    {
        if (i % 2 == 0)
           even += arr[i];
        else
            odd += arr[i];
    }
    printf("Sum of all odd numbers  = %d\n", odd_sum);
    printf("Sum of all even numbers = %d\n", even_sum);
}

/* int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++) {
        // Loop to find even, odd sum
        if (i % 2 == 0)
            even += arr[i];
        else
            odd += arr[i];
    }
    int arr[] = { 1, 2, 3, 4, 5, 6 };
