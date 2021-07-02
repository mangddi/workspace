#include <stdio.h>

int main()
{
    int i, j;
    int arr[5];
    int sum = 0;

    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);

        if(i % 2 == 0) sum += arr[i];
    }
    printf("%d", sum);
    

}