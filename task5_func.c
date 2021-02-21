#define _USE_MATH_DEFINES
#include <math.h>

extern void main (void);
double f2(double x)
{
    double y = (sin((M_PI/2)+3*x))/(1-sin(3*x-M_PI));
    return (y);
}
