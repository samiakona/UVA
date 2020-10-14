#include<stdio.h>
#include<math.h>
int main()
{
    double r1,r2;
    printf("Enter the radius_1 : ");
    scanf("%lf",&r1);
    printf("Enter the radius_2 : ");
    scanf("%lf",&r2);
    double pi=3.1416;

    double area_1=4*pi*r1*r1;

    double volume_1=(4.0/3)*pi*r1*r1*r1;

    double area_2=4*pi*r2*r2;

    double volume_2=(4.0/3)*pi*r2*r2*r2;

    double max_area,max_volume;

    if(area_1>area_2)
    {
        max_area=area_1;
    }

    else
    {
        max_area=area_2;
    }
    if(volume_1>volume_2)
    {
        max_volume=volume_1;
    }
    else
    {
        max_volume=volume_2;
    }
    printf("%0.2lf %0.2lf\n",max_area,max_volume);
    return 0;
}
