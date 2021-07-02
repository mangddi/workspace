#include <stdio.h>

int main()
{
    int i, j;
    int a[5][6] = {{0, 1, 0, 1, 0, 1}};

    for(i = 1; i < 5; i++){
        for(j = 1; j < 6; j++){
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j + 1];
        }
        
    }
    for(i = 0; i < 5; i++){
        for(j = 1; j < 6; j++){
        printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
    