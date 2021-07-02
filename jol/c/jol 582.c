#include <stdio.h>
#include <math.h>

double pi(int a)
{
    double tmp = 0;
    
    tmp = sqrt(a / 3.14); 

    return tmp;
}

int main()
{
    int a;

    scanf("%d", &a);

    printf("%.2lf", pi(a));

    return 0;

}