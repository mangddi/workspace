#include <stdio.h>

int main()
{
    int n, i, j;
    char tmp1 = 'A';
    char tmp2 = 1;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        for(j = 1; j <= n - i; j++){
            printf("%d ", tmp2++);
        }
        for(j = 1; j <= i + 1; j++){
            printf("%c ", tmp1++);
        }
        printf("\n");
    }
    return 0;
}