#include <stdio.h>

int main()
{
    int i, tmp;
    int a[100];
    a[0] = 100;
    scanf("%d", &a[1]);

    for(i = 2; i < 100; i++){
        a[i] = a[i - 2] - a[i - 1];
        if(a[i] < 0) break;
    }
    for(tmp = 0; tmp <= i; tmp++){
        printf("%d ", a[tmp]);
    }
} 