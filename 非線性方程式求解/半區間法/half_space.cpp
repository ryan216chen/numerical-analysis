#include <stdio.h>
#include <math.h>
double half_space(double f(double),double a,double b,double eps,int iter)
{
    double fa = f(a);
    double c,fc;
    for(int i=0;i<iter;i++)
    {
        c = (a+b) / 2.0;
        fc = f(c);
        if(fabs(fc) < eps)
        {
            break;
        }
        if(fc * fa > 0)
        {
            a = c;
        }
        else
        {
            b = c;
        }
    }
    return c;
}