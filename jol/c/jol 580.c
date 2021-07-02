#include <stdio.h>

int Date(int m, int d)
{
    int c[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(m > 0 && m <= 12)
    {
        if(d <= c[m - 1] && d > 0)
        return 1;
    }
    return 0;
}

int main()
{
    int m, d;

    scanf("%d %d", &m, &d);
    if(Date(m, d))
    printf("Ok!");
    else
    printf("BAD!");

    return 0;
    
}