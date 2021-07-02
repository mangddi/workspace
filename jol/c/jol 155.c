#include <stdio.h>

int main()
{
    int i;
    char tmp;
    char arr[6] = {'J', 'U', 'N', 'G', 'O', 'L'};
    scanf(" %c", &tmp);

    for(i = 0; i < 6; i++){
        if(arr[i] == tmp){
            printf("%d", i);
            return 0;
        }
    }
    printf("none");
}
