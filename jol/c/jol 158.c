#include <stdio.h>

int main()
{
    int i, tmp;
    int arr[100];

    for(i = 0; i < 100; i++){
        scanf("%d", &arr[i]);

        if(arr[i] == 0) break;
    }
    printf("%d\n", i);

    for(tmp = 0; tmp < i; tmp++){
        if(arr[tmp] % 2 == 0) arr[tmp] /= 2;
        else arr[tmp] *= 2;

        
        printf("%d ", arr[tmp]);

    }

}