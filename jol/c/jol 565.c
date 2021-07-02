

#include <stdio.h>

int main()
{
    int a[11] = {0};
    int i;
    int input;
    for(i = 0;i < 100; i++){
        scanf("%d", &input);
        if(input == 0) break;
        a[input / 10]++;
    }

    for(i = 0; i < 10; i++){
        if(a[i] > 0){
            printf("%d : %d\n", i, a[i]);
        }
    }

    
}