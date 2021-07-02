#include <stdio.h>
#include <math.h>

int main()
{
    double a[3], tmp;
    for(int i = 0; i < 3; i++)
    {
        scanf("%lf", &a[i]);
    }

    for(int i = 0; i <2; i++)
    {
        for(int j = 1; j < 3; j++)
        {
            if(a[i] < a[j])
            {
            tmp = a[j];
            a[j] = a[i];
            a[i] = tmp;
            }
        }
    }

    printf("%.0lf %.0lf %.0lf", ceil(a[0]), floor(a[2]), round(a[1]));

    return 0;
}