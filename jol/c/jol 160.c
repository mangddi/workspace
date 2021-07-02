#include <stdio.h>

int main()
{
    int i, num;
    int a[6] = {0};

    for(i = 0; i < 10; i++){
        scanf("%d", &num);
        a[num - 1]++;
    }
    for(i = 0; i < 6; i++){
        printf("%d : %d\n", i + 1, a[i]);
    }
}