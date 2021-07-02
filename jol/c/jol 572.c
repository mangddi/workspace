#include <stdio.h>

int print(int a)
{
    
    printf("%.2lf", a * a * 3.14);
}

int main()
{   
    int a;
    scanf("%d", &a);
    print(a);
}
