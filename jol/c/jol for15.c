#include <stdio.h>

int main()
{
    int i = 0, M3 = 0, M5 = 0, num;

    for(i = 0; i < 10; i++ ){
    scanf("%d", &num);

    if(num % 3 == 0)
    M3++;

    if(num % 5 == 0)
    M5++;
    }

    printf("Multiples of 3 : %d\n", M3);
    printf("Multiples of 5 : %d\n", M5);

}