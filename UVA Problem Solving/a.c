#include<stdio.h>
#include<math.h>
int main()
{
    int a[100];
    int X, Y;
    int i, j=0;
    scanf("%d %d",&X,&Y);
    if(X>Y){
        int K=X;
        X=Y;
        Y=K;
    }
    int sum=0;
    for(i=X;i<=Y;i++){
        if(i%3==0 && i%5==0 && i%2==1)
            {
                a[j] = i;
                sum = sum + i;
                j++;
    }
    }
    printf("%d and ",sum);
    for(i=0;i<j;i++)
        printf("%d ", a[i]);

    return 0;

}
