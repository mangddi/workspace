#include <stdio.h>

int main()
{
    int n, j, i;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        for(j = 1; j <= i; j++){
            printf(" ");
        }
        for(j = 1; j <= (n - i) * 2 - 1; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i = 1; i < n; i++){
        for(j = 1; j < n - i; j++){
            printf(" ");
        }
        for(j = 0; j < 2 * i + 1; j++){
            printf("*");
        }
         printf("\n");
    }
    return 0;
    }