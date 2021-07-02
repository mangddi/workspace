#include <stdio.h>

int main()
{
    int i, min = 999999, max = -999999;

    int arr[100];

    for(i = 0; i < 100; i++){
        scanf("%d", &arr[i]);

        if(arr[i] == 999) break;
        if(min > arr[i]) min = arr[i];
        if(max < arr[i]) max = arr[i];

    }
     printf("max : %d\n", max);
     printf("min : %d", min);

}