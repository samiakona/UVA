#include<stdio.h>
int main()
{
    int row, col ;
    scanf ("%d %d", row, col);
    int a[100][100];
    int b[100][100];
    int mult [100][100];
    int sum [100][100];
    int i, j;
    for(i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
            {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
            {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
            {
            //mult [i][j]=a[i][j]*b[i][j];
            sum [i][j]=a[i][j]+b[i][j];
        }
        printf("\n");
    }




    return 0;
}
