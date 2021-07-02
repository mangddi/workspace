#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    
    while(1){
    
        scanf("%d", &a);
        if(a == 0)
        break;
        else if(a % 2 == 0) c++;
        else b++;
        
    }

    printf("odd : %d\n", b);
    printf("even : %d", c);
    return 0;

}