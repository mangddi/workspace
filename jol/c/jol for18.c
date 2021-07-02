#include <stdio.h>

int main()
{
    int i, j;

    for(i = 2; i <= 4; i++){

        for(j = 1; j <= 5; j++)
        printf("%d * %d = %d\n", i, j, i * j);


    }
    return 0;
}

