#include <stdio.h>

void print()
{
    printf("~!@#$^&*()_+|\n");
}

int main()
{
    int num, i;
    scanf("%d", &num);

    for(i = 0; i < num; i++)
    {
        print();
    }
}