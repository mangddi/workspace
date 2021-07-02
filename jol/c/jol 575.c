#include <stdio.h>

int square(int a, int b)
{
    int i, squ;
    squ = 1;

    for(i = 0; i < b; i++)
    {
        squ *= a;
    }

    printf("%d", squ);

    return squ;
}


int main()
{

    int a, b;


    scanf("%d %d", &a, &b);

    square(a, b);
    
    return 0;
}