#include <stdio.h>

int main()
{
    int i, j, sum = 0;
    int a[4][3] = {{3, 5, 9}, {2, 11, 5}, {8, 30, 10}, {22, 5, 1}};

    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
            sum += a[i][j];
        }
        printf("\n");
    }
    printf("%d", sum);
}
