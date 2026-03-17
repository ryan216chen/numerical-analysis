#include <stdio.h>
#include <math.h>
double f(double x);
double fp(double x);
double newton(double fir(double x),double firp(double x),double x,int n,double eps);
double g(double);
double gp(double x);
int main()
{
    double x0;
    printf("First case:\n");
    printf("Intial guess= ");
    scanf("%lf",&x0);
    printf("MAXN = ");
    int cnt;
    scanf("%d",&cnt);
    printf("eps = ");
    double eps;
    scanf("%lf",&eps);
    double tmp = newton(f,fp,x0,cnt,eps);
    printf("x0  = %10.3f\n",tmp);
    printf("f(x0) = %10.3f\n",f(tmp));


    printf("Second case:\n");
    printf("Initial guess= ");
    scanf("%lf",&x0);
    printf("MAXN = ");
    scanf("%d",&cnt);
    printf("eps = ");
    scanf("%lf",&eps);
    tmp = newton(g,gp,x0,cnt,eps);
    printf("x0 = %10.3f\n",tmp);
    printf("f(x0) = %10.3f\n",g(tmp));
    return 0;
}

double f(double x)
{
    return x * x - 2.0;
}

double fp(double x)
{
    return 2. * x;
}

double newton(double fir(double x),double firp(double x),double x,int n,double eps)
{
    double x0 = x;
    double fx0;
    for(int i=0;i<n;i++)
    {
        fx0 = fir(x0);
        if(fabs(fx0) < eps)
        {
            break;
        }
        x0 = x0 - fx0/firp(x0);
    }
    return x0;
}

double g(double x)
{
    return sin(x) - 5. * x + 1.;
}

double gp(double x)
{
    return cos(x) - 5.;
}
