#include <stdio.h>

int main()
{
    int i, j;
    int a[2][3] = {0};
    int b[2][3] = {0};
    int c[2][3] = {0};

    printf("first array\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf(" %d", &a[i][j]);
        }
    }

    printf("second array\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf(" %d", &b[i][j]);
        }
    }

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

}