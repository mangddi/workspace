#include <stdio.h>

int main()
{
    int i, j, num, tmp;
    int a[100];


    scanf("%d", &num);

    for(i = 0; i < num; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < num - 1; i++){
        for(j = i + 1; j < num; j++){
            if(a[i] < a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for(i=0;i<num;i++){
        printf("%d\n", a[i]);
    }

}