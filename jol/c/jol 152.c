#include <stdio.h>

int main()
{
    int i;
    int sum1 = 0, sum2 = 0;
    int arr[10];

    for(i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 10; i++){
        if(i % 2 == 0) sum1 += arr[i];

        else 
        sum2 += arr[i];
    }
    printf("odd : %d\n", sum1);
    printf("even : %d\n", sum2);
}