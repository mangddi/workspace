#include <stdio.h>

int main()
{
    int arr[100];
    int i;
    int sum1 = 0, sum2 = 0;

    for(i = 0; i < 100; i++){
        scanf("%d", &arr[i]);
        
        if(arr[i] == 0) break;

        if(arr[i] % 5 == 0){
            sum2++;
            sum1 += arr[i];

        }
    }
    printf("Multiples of 5 : %d\n", sum2);
    printf("sum : %d\n", sum1);
    printf("avg : %.1f\n", (double) sum1 / sum2);
}