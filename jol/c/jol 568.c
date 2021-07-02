#include <stdio.h>

int main()
{
    int a[2][4];
    int b[2][4];

    int i, j;
    printf("first array\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j <4; j++){
    
    scanf("%d", &a[i][j]);
        }
    }
    printf("second array\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j <4; j++){
    
    scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", a[i][j] * b[i][j]);
        }
        printf("\n");
    }
    

    
}