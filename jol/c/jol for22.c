#include <stdio.h>

int main()
{
    int i, j, num1, num2;
    scanf("%d %d", &num1, &num2);

    for(i = 1; i <= num1; i++){
        for(j = 1; j <=  num2;j++){
            printf("%d ", i * j);
        }
        printf("\n");
    }


    return 0;
}