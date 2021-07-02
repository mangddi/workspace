#include <stdio.h>

int main()
{   
    int i, j, num1, num2;
    scanf("%d %d", &num1, &num2);

    if(num1 < num2){
        for(i = 1; i <= 9; i++){
        for(j = num1; j <= num2; j++){
            printf("%d * %d = %2d   ", j, i, j * i);
        }
        printf("\n");
    }
        
    }
    else{
    for(i = 1; i <= 9; i++){
        for(j = num1; j >= num2; j--){
            printf("%d * %d = %2d   ", j, i, j * i);
        }
        printf("\n");
    }
    }
    return 0;
}
