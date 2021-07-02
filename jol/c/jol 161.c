#include <stdio.h>

int main()
{
    int i, num;
    int a[100] = {0};

    for(i = 0; i < 100; i++){
        scanf("%d", &num);
        if(num == 0) break;
        a[num / 10]++;
    }
    for(i = 10; i >= 0; i--){
        if(a[i] > 0)
        printf("%d : %d person \n", i * 10, a[i]);
    }
}