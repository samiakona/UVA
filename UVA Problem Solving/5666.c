#include<stdio.h>
#include<math.h>
int main()
{
    int arow, acol, brow, bcol;
    int a[100][100][100];
    int b[100][100][100];
    int i, j, k;
    int sum=0;
    int result[100][100][100];
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
    printf("Enter The rows and columns b : ");
    scanf("%d %d", &brow, &bcol);
    printf("Enter the elements if matrix b : \n");
    if (brow!=acol)
    {
        printf("Error");
    }
    else
    {
        for(i=0;i<brow;i++)
        {
            for(j=0;j<bcol;j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
    }
        printf("\n");
        for(i=0;i<arow;i++)
        {
            for (j=0;j<bcol;j++)
            {
                for (k=0; k<brow;k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                result[i][j] =sum;
                sum=0;
            }
        }

    printf("Resultant Matrix \n");
    for(i=0;i<arow;i++)
    {
        for(j=0;j<bcol;j++)
        {
            printf("%d\n", result[i][j]);
        }
    }

    return 0;
}
