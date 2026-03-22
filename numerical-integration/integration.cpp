#include <stdio.h>
#include <math.h>
double f(double x);
double trapeAdvance(double f(double),double a,double b,int n,double i0);
void main()
{

}

double trapeAdvance(double f(double),double a,double b,int n,double i0)
{
    double h = (b-a)/n;
    double h2 = h+h;
    double x,i;
    if(n == 1)
    {
        return 0.5 * h * (f(a) + f(b));
    }
    i = 0.5 * (f(a)+f(b));
    x = a + h;
    while(x < b)
    {
        i += f(x);
        x += h;
    }
    i *= h;
    return i;
}