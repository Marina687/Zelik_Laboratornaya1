#include "stdio.h"
#define _USE_MATH_DEFINES
#include <math.h>

double f2(double x)
{
    double y = (sin((M_PI/2)+3*x))/(1-sin(3*x-M_PI));
    return (y);
}

void main (void)
{
    double x = 5;
    double f;
        double f1;
        f = f2(x);
    printf ("x = %f\n",x);
    printf ("f = %5.4f\n",f);
    
    
    double x1 = 0;
    printf("Input x1: ");
    scanf("%lf",&x1);
    printf("x1 = %f\n", x1);
    f1 = f2(x1);
    printf("f1 = %5.4f\n",f1); 
    
    char str1[10]; 
    scanf("%s", str1);

    return;
    
}



