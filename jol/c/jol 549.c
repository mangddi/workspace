#include <stdio.h>

int main()
{   
    int n, i, sum = 0, count = 0;
    scanf("%d", &n);

    for(i = 1; sum < n; i+= 2){
        count++;
        sum += i;

    }
    printf("%d %d", count, sum);
    return 0;
    
}
