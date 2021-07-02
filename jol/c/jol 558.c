#include <stdio.h>

int main()
{
    int i;
    int arr[100] = 0;

    for(i = 0; i < 100; i++){
        scanf("%d", &arr[i]);

        if(arr[i] == 0) break;
    }
    for(int j = i - 1; j >= 0; j--){
        printf("%d ", arr[j]);
    }
}
