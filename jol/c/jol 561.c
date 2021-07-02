#include <stdio.h>

int main()
{
    int i, MAX = 0, MIN = 10001;
    int arr[10];

    for(i = 0; i < 10; i++){
        scanf("%d", &arr[i]);

        if(MAX < arr[i] && arr[i] < 100){
        MAX = arr[i];
        }

        else if(MIN > arr[i] && arr[i] >= 100){ 
        MIN = arr[i];
        }
    }
    if(MAX == 0) MAX = 100;
    else if(MIN == 10001) MIN = 100;
    printf("%d %d", MAX, MIN);
}