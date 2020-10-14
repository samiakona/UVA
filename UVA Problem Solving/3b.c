#include<stdio.h>


int main()
{
    int X, Y, Z;
    printf("Enter the first value : ");
    scanf("%d", &X);
    printf("Enter the second value : ");
    scanf("%d", &Y);
    printf("Enter the third value : ");
    scanf("%d", &Z);
    calculation(X,Y);

    cal_minimum(X,Y,Z);

    return 0;
}

//Calculation function

int calculation (a,b){
    int sum = a+b;
    int sub = a-b;
    int multi = a*b;
    double div = (double)a/b;
    printf("Summation of %d and %d is = %d\n", a, b, sum);

    printf("Subtraction of %d and %d is = %d\n", a, b, sub);

    printf("Multiplication of %d and %d is = %d\n", a, b, multi);

    printf("Quotient of %d and %d is = %.2f\n", a, b, div);
}

//Find minimum
int cal_minimum(a,b,c)
{
    if (a<b && a<c)
    {
        printf("Minimum Number = %d",a);
    }
    else if (b<c)
    {
        printf("Minimum Number = %d",b);
    }
    else{
        printf("Minimum Number = %d",c);
    }

}




