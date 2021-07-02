#include <stdio.h>
#include <math.h>

int sq1(int a, int b)
{   
    int tmp1 = 0;
    if(abs(a) > abs(b))
    {
        tmp1 = a;
    }
    else
    {
        tmp1 = b;
    }
    return tmp1;
}
double sq2(double c, double d)
{
    double tmp2 = 0;
    if(fabs(c) < fabs(d))
    {
        tmp2 = c;
    }
    else
    {
        tmp2 = d;
    }
    return tmp2;
}

int main()
{
    int a, b;
    double c, d;

    scanf("%d %d", &a, &b);
    scanf("%lf %lf", &c, &d);

    printf("%d\n", sq1(a, b));
    printf("%0.2lf\n", sq2(c, d));

    return 0;
}
