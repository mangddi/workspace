#include <stdio.h>

int main()
{
    int num;
    int *ptr;
    ptr = &num;
    scanf("%d", ptr);

    printf("%d...%d", *ptr/10, *ptr%10);


    return 0;
}