#include <stdio.h>

int main()
{
    int i = 0, num = 0, sum = 0;

    while(1){
        scanf("%d", &num);

        if(num == 0) break;
        
        else if(num % 3 != 0 && num % 5 != 0)
        i++;
    }
    printf("%d", i);

    return 0;
    

}