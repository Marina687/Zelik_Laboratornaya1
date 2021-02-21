#include "stdio.h"

extern double f2(double x);
void main (void)
{
    double x = 5;
    double f;
    f = f2(x);
    printf ("x = %f\n",x);
    printf ("f = %5.4f\n",f);
    
    printf("Input x: ");
    scanf("%lf",&x);
    printf("x = %f\n", x);
    f = f2(x);
    printf("f1 = %5.4f\n",f); 
    
    char str1[10]; 
    scanf("%s", str1);
    
}





