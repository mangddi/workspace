#include <stdio.h>

int main()
{
    int i, sum2 = 0, sum1= 0;
    int arr[10];

    for(i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        
        if(i % 2 != 0)
        {
            sum2 += arr[i];
        }
        else
        {
            sum1 += arr[i];
        }
    
    }
    printf("sum : %d\n", sum2);
    printf("avg : %.1f", (double) sum1 / 5);
}