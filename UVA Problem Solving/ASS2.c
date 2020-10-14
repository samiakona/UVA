#include<stdio.h>
int main()
{
    int a[100][100];
    int b[100][100];
    int arow, acol, brow, bcol;
    int multiply [100][100];

    int sum;
    int i, j, k;

    printf("Enter the rows and columns of the matrix a: ");
    scanf("%d %d", &arow, &acol);
    printf("Enter the elements of matrix a: \n");
    for (i=0; i<arow; i++)
    {
        for (j=0; j<acol; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the rows and columns of the matrix b: ");
    scanf("%d %d", &brow, &bcol);
    printf("Enter the elements of matrix b: \n");
    for (i=0; i<brow; i++)
    {
        for (j=0; j<bcol; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");

    for (i=0; i<arow; i++)
    {
        for (j=0; j<bcol; j++)
        {
            for (k=0; k<brow; k++)
            {
                sum = sum + a[i][k]*b[k][j];
            }

            multiply[i][j] = sum;
            sum = 0;
        }

    }
    printf("Result : \n");
    for (i=0; i<arow; i++)
    {
        for (j=0; j<bcol; j++)
        {
            printf("%d ", multiply[i][j]);
            //printf("\n");
        }
        printf("\n");
    }

    return 0;
}
