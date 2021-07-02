#include <stdio.h>

int squre(int n)
{
    int tmp = 0;
    int i, j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            tmp++;
            printf("%d ", tmp);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    squre(n);

}