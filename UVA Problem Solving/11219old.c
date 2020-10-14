/*#include<stdio.h>
int main()
{
    int t, d1, d2, m1, m2, y1, y2, age, i;
    while(scanf("%d",&t)==1)
    {
       // for(i=1; i<t;i++)

            char temp1, temp2;
            scanf("%d %c %d %c %d", &d1, &temp2, &m1, &temp2, &y1);
            scanf("%d %c %d%c %d", &d2, &temp1, &m2, &temp1, &y2);

        if(d1>d2)
        {
            d2=d2+30;
            m1=m1+1;
        }
        if(m1>m2)
        {
            m2=m2+12;
            y1=y1+1;
        }
        age=y2-y1;
        if(age>0)
        {
            printf("Case #%d:‘Invalid birth date’\n",i);
        }
        else if(age>130)
        {
            printf("Case #%d:‘Check birth date’\n",i);
        }
        else
        {
            printf("Case #%d:‘Check birth date’\n",i,age);
        }
    }
    return 0;
}*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0; i<T; i++)
    {
        int Dc,Mc,Yc,Db,Mb,Yb;
        scanf("%d/%d/%d%d/%d/%d",&Dc,&Mc,&Yc,&Db,&Mb,&Yb);
        if((Dc-Db)<0)
            Mc--;
        if((Mc-Mb)<0)
            Yc--;
        if((Yc-Yb)<0)
            printf("Case #%d: Invalid birth date\n",i+1);
        else if((Yc-Yb)>130)
            printf("Case #%d: Check birth date\n",i+1);
        else
            printf("Case #%d: %d\n",i+1,Yc-Yb);
    }
    return 0;
}
