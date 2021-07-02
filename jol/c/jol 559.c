#include <stdio.h>

int main()
{
    double avg[6] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int i;
    int a, b;
    for(i = 0; i < 1; i++){
        scanf("%d %d", &a, &b);
    }
    printf("%.1lf", avg[a - 1] + avg[b - 1]);

    return 0;
}
