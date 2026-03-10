#include <stdio.h>
#include <math.h>
double f(double x);
double fp(double x);
int main()
{
    double x0 = 1.0;
    double fx0;
    for(int i = 0;i<10;i++)
    {
        fx0 = f(x0);
        if(fabs(fx0) < 1.e-3)
        {
            break;
        }
        x0 = x0 - fx0/fp(x0);
    }
    printf("  x0 = %10.3f\n",x0);
    printf("f(x) = %10.3f\n",fx0);
    return 0;
}

double f(double x)
{
    return x * x - 2.0;
}

double fp(double x)
{
    return 2 * x;
}
