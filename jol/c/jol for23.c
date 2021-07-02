#include <stdio.h>

int main()
{
    int i, j, num1;
    scanf("%d", &num1);

    for(i = 1; i <= num1; i++){
        for(j = 1; j <= num1; j++){
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }


    return 0;
}