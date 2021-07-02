#include <stdio.h>

int main()
{   
    int i, a =0;

    scanf("%d", &i);

    for(; i < 101; i++)
    a+= i;

    printf("%d", a);

    return 0;
}
