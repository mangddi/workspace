#include <stdio.h>

int main()
{
    int i, n = 0, a = 0, avg = 0;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
    scanf("%d", &a);
    avg+= a;

    }
    printf("avg : %.1f\n", (float)avg / n );

    if((float)avg / n >= 80)
    printf("pass");

    else
    printf("fail");

    return 0;
    
}