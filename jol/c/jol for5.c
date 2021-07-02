#include <stdio.h>

int main()
{
    int a = 0;

    
    while(1){

    scanf("%d", &a);

    if(a == -1)
    break;

    else if(a % 3 != 0)
    continue;

    else if(a % 3 == 0)
    printf("%d\n", a / 3);
    

    }
    return 0;

}