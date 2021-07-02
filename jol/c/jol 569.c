#include <stdio.h>

int main()
{
    int i, j, tmp = 0;
    int a[5][4];
    int sum[5] = {0};

    for(i = 0; i < 5; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j];
        }
    }
    for(i = 0; i < 5; i++){
        if(sum[i] >= 320){
            printf("pass\n");
            tmp++;
        }
        else printf("fail\n");
    }
    printf("Successful : %d", tmp);
    }
