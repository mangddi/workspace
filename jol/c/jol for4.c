
#include <stdio.h>

int main()
{
    int i = 0, sum = 0, num;

    while(1)
    {
        scanf("%d", &num);
        sum+= num;
        i++;
        if(num >= 100) break;

        }
        printf("%d\n", sum);
        printf("%.1f", (float) sum / i);

    

    return 0;


}