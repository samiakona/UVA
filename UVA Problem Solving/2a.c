#include<stdio.h>
int main()
{
    int X, Y, Z;
    printf("Enter the first value : ");
    scanf("%d",&X);
    printf("Enter the second value : ");
    scanf("%d",&Y);
    int temp = X;
    X = Y;
    Y = temp;
    Z=abs(X-Y);
    printf("Swap two values = %d %d\n", X, Y);
    printf("Difference %d and %d = %d", X, Y, Z);
    return 0 ;
}
/*#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int temp=x;
    x=y;
    y=temp;
    printf("%d %d %d\n",x,y,abs(x-y));
    return 0;
}*/
