#include <stdio.h>

int main()
{

    double a = 0;
    printf("yard? ");
    scanf(" %lf", &a);
    printf("%.1fyard = %.1fcm", a, a * 91.44);
    return 0;


}