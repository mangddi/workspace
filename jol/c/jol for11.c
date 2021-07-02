#include <stdio.h>

int main()
{
    int b = 0, h = 0;
    char c1;

    while(1){

    printf("Base = ");
    scanf("%d", &b);

    printf("Height = ");
    scanf("%d", &h);

    printf("Triangle width = %.1f\n", (float) b * h / 2);

    printf("Continue? ");
    scanf(" %c", &c1);
    
    if(c1 != 'Y' && c1 != 'y') 
    break;
    
    }

    return 0;

}