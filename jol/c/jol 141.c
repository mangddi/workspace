#include <stdio.h>

int main()
{
    int n, i, sum;
    scanf("%d", &n);

    for(i = 1; i < 100; i++){
        sum = n * i;
        
        
        
        if(sum < 100){
        printf("%d ", sum);
        }
        if(sum % 10 == 0){
            break;
        }
        
        
    }
    return 0;
}