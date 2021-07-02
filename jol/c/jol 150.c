#include <stdio.h>

int main()
{
    int i, j;
    char arr[10];

    for(i = 0; i < 10; i++){
        scanf(" %c", &arr[i]);
    }
        for(i = 9; i >= 0; i--){
            printf("%c ", arr[i]);
        }
    
}