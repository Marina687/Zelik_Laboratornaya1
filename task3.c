#include "stdio.h"
#define _USE_MATH_DEFINES
#include <math.h>

double f2(double x);

void main (void)
{
    double x = 5;
    double f;
        double f1;
        f = f2(x);
    printf ("x = %f\n",x);
    printf ("f = %5.4f\n",f);
    
    
    printf("Input x: ");
    scanf("%lf",&x);
    printf("x = %f\n", x);
    f = f2(x);
    printf("f = %5.4f\n",f); 
    
    char str1[10]; 
    scanf("%s", str1);

    return;
    
}

double f2(double x)
{
    double y = (sin((M_PI/2)+3*x))/(1-sin(3*x-M_PI));
    return (y);
}



