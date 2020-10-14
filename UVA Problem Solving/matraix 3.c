#include<stdio.h>
int main()
{
    int arow, acol, brow, bcol;
    int a[100][100];
    int b[100][100];
    int i, j, k;
    int sum;
    printf("Enter The rows and columns a : ");
    scanf("%d %d", &arow, &acol);
    printf("Enter the elements if matrix a : \n");
    for(i=0;i<arow;i++)
    {
        for(j=0;j<acol;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }








    return 0;
}
