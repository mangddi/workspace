#include <stdio.h>

int squ(int a, int b)
{
    if(a > b)
    {
        a /= 2;
        b *= 2;
    }
    else 
    {
        a *= 2;
        b /= 2;
        
    }

    printf("%d %d", a, b);
}

int main()
{
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    squ(a, b);

    
} 