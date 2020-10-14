#include<stdio.h>
int main()
{
    float x, y, z;
    x=4.5,  y=-9, z=10.5;
    x=y+(--z);
    y=z - (x++);
    printf("x= %f y=%f\n",y,z++);
    z= x++ + (--y);
    printf("y= %f z=%f\n",x++,--z);
    return 0;
}
