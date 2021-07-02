#include <stdio.h>

int main()
{
    int i, tmp;
    int arr[100];

    for(i = 0; i < 100; i++){
        scanf("%d", &arr[i]);

        if(arr[i] ==  -1) break;
    }
    if(i < 3) tmp = 0;

    else tmp = i - 3;

    for(tmp = 0; tmp)
}