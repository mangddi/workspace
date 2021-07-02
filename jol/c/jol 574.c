#include <stdio.h>

int fun(int a, int b, int c)
{
    int max = 0;

    if(a > b && a > c) max = a;

    else if (b > a && b > c) max = b;
    
    else max = c;

    return max;

}

int main()
{   
    int a, b, c, max;

    scanf("%d %d %d", &a, &b, &c);
    

    printf("%d\n", fun(a, b, c));
}