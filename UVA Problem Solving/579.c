#include<stdio.h>
#include<math.h>
int main()
{
    float h, m ,ang, x, y;
    while(scanf("%f:%f", &h, &m)!=EOF)
    {
        if(h==0 &&  m==0)
            break;
            x=(h*60+m)/2;
            y=(m*6);
            ang=x-y;
        //ang=(h*60+m)/2-(m*6);
        if(ang>180)
            ang=360-ang;
        if(ang<0)
        ang=ang*-1;
        printf("%.3f",ang);
    }
    return 0;
}
/*#include<stdio.h>
#include<math.h>
int main()
{
    float h, m ,ang,i,j;
    while(scanf("%f:%f", &h, &m)!=EOF)
    {
        if(h==0 &&  m==0)
            break;
            i=(h*30+(m/2));
            j=m*6;
        ang=i-j;
        if(ang>180)
            ang=360-ang;
        if(ang<0)
        ang=ang*-1;
        printf("%.3f\n",ang);
    }
    return 0;
}*/
