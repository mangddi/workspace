#include <stdio.h>

int main()
{
    int i, j, tmp;
    int arr[10];

    for(i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < 9; i++){
        for(j = i + 1; j < 10 ; j++){
            if(arr[i] < arr[j]){
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for(i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }   

}      