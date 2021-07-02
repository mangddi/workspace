#include <stdio.h>

int main()
{
    int i, num;
    int a[10] = {0};

    scanf("%d %d", &a[0], &a[1]);

    for(i = 2; i < 10; i ++){
        a[i] = (a[i - 1] + a[i - 2]) % 10; 
    }

    for(i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }
 
}