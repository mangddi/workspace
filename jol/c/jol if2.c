#include <stdio.h>

int main()

{
    double a = 0, b = 0;
    scanf("%lf %lf", &a, &b);
    printf("%d\n", (int) (b + 100 - a));

    if (b + 100 - a > 0)
        printf("Obesity");

    return 0;
    

}