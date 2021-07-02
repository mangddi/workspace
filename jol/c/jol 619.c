#include <stdio.h>

int main()
{
    int a;
    int *ptr; 
    scanf("%d", &a);

    ptr = &a;

    printf("%#p %d", ptr, *ptr);

    
}