#include<stdio.h>
int main()
{
    int n=5;
    while (n++<7)
    {
        printf("%d\n",n++);
    }
    return 0;
}

/*#include<stdio.h>
int main()
{
    int i = 0;

    // logical error : a semicolon after loop
    for(i = 0; i < 3; i++);
    {
        printf("%d");
    }
    getchar();
    return 0;
}
*/
