#include<stdio.h>
int main()
{
    int n, ans, c=1;
    scanf("%d",&n);
    int bday, bmonth, byear;
    int cday, cmonth, cyear;
    char a, b;
    while (n--)
    {
        scanf("%d %c %d %c %d", &bday, &bmonth, &byear);
        scanf("%d %c %d %c %d", &cday, &cmonth, &cyear);
        printf("Case #%d: ",c++);

    if(byear>cyear || (byear == cyear && bmonth>cmonth) || (byear == cyear && bmonth == cmonth && bday>cday))
    {
        printf("‘Invalid birth date’\n");
    }
    else if (cyear-byear == 0)
    {
        printf("0\n");
    }
    else {
        ans = cyear - byear;
        if(bmonth > cmonth) ans--;
        else if ( bmonth == cmonth && bday>cday ) ans--;
    }
    if(ans>130)
    {
        printf("‘Check birth date’\n");
    }
    else
    {
        printf("%d\n",ans);
    }

    }



    return 0;
}
