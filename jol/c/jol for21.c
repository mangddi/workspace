#include <stdio.h>

int main()
{
    int i, j;
    scanf("%d", &j);

    for(i = 1; i <= 10; i++){
        printf("%d ", i * j);
    }


    return 0;
}