#include <stdio.h>

int sum(int a, int b, char com)
{
    if(com == '+')
        printf("%d + %d = %d", a, b, a+b);
    else if(com == '-')
        printf("%d - %d = %d", a, b, a-b);
    else if(com == '*')
        printf("%d * %d = %d", a, b, a*b);
    else if(com == '/')
        printf("%d / %d = %d", a, b, a/b);
    else
        printf("%d %c %d = %d", a, com, b, 0);
}

int main()
{
    int a, b;
    char com;
    scanf("%d %c %d", &a, &com, &b);
    sum(a, b, com);

    return 0;
}