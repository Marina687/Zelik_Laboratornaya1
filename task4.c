#include "stdio.h"
#define _USE_MATH_DEFINES
#include <math.h>

void f2(void);

double x = 5;
double result;


void main (void)
{
    printf ("x = %f\n",x);
    f2();
    printf ("f = %5.4f\n",result);
    printf("Input x: ");
    scanf("%lf",&x);
    f2();
    printf("x = %f\n", x);
    printf("f = %5.4f\n",result); 
        char str1[10]; 
    scanf("%s", str1);

       
}

void f2(void)
{
   result = (sin((M_PI/2)+3*x))/(1-sin(3*x-M_PI));
}



