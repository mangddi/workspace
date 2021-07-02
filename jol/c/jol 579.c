#include <stdio.h>

void sort(int a[], int n)
{
    int i, j;
    int tmp = 0;

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
            {
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            }
        }
    }
}

int main()
{
    int n, i;
    int a[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, n);

     for(i = 0;i < n; i++)
     {
        printf("%d ", a[i]);
     }



}