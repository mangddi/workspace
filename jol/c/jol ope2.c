#include <stdio.h>

int main()
{
    int a, b;
    int result;

    
    scanf(" %d %d", &a, &b);

    result = a * --b;
    printf("%d %d %d", ++a, b, result);

    

    return 0;
}