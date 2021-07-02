#include <stdio.h>

int main()
{
    double a = 0, b = 0;

    scanf("%lf %lf", &a, &b);

    printf("%d %d", (int) (a * b), (int)a * (int)b);

    return 0;

}
