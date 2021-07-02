#include <stdio.h>

void good(int a)
{ 
    
    for(int i = 1; i < a + 1; i++)
    {
        for(int j = 1; j < a + 1; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }

}

int main()
{
    int a;
    scanf("%d", &a);

    good(a);

    return 0;
}