#include <stdio.h>

int good(int x, int y)
{
    int sum;

    if(x > y)
    {
        sum = x * x - y * y;
    }
    else 
    {
        sum = y * y - x * x;
    }

    return sum;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    
    
    printf("%d", good(x, y));

    return 0;
}