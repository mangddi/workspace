#include <stdio.h>

int main()
{
    int n, sum = 0;
    
    int i;
    
    for(i = 0; i < 20; i++){
        scanf("%d", &n);

        sum += n;
        

        if(n == 0) break;

    }
    printf("%d %d", sum, sum / i);

    
}