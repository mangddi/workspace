#include <stdio.h>

int main()
{
    int i, j, sum[4] = {0};
    int a[4][3] = {0};

    for(i = 0; i < 4; i++){
        printf("%dclass? ", i + 1);
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j];
        }
    }
    for(i = 0; i < 4; i++){
        printf("%dclass : %d\n", i + 1, sum[i]);
    }
}