#include<stdio.h>
#include<math.h>
int main()
{
    int arr[1000];
    int x,y;
    int i,j=0;
    scanf("%d %d",&x,&y);
    if(x>y){
        int A=x;
        x=y;
        y=A;
    }
    int s=0;
    for(i=x;i<=y;i++){
        if(i%3==0){
            if(i%5==0){
                if(i%2==1){
                    arr[j]=i;
                    s+=i;
                    j++;
                }
            }
        }
    }
    printf("sum = %d\n",s);
    for(i=0;i<j;i++){
        printf("%d and %d ",arr[i]);
    }
    return 0;
}
