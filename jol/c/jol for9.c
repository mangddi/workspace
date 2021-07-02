#include <stdio.h>

int main()
{
    int i = 0, num = 0, sum = 0;

    while(1){

        scanf("%d", &num);

        if (num > 100 || num < 0) break;

        sum+= num;
        i++;


    }
    printf("sum : %d\n", sum);
    printf("avg : %.1f", (float) sum / i);

    return 0;

}