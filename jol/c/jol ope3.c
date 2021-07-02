#include <stdio.h>
 
int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    printf("%d\n", (a == b) ? 1 : 0);
    printf("%d", (a == b) ? 0 : 1);

    return 0;
}