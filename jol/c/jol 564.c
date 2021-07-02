#include <stdio.h>

int main()
{
    int i, a[26] = {0};
    char input;

    for(i = 0; i < 100; i++){
        scanf(" %c", &input);
        if(input < 65 || input > 95) break;
        a[input - 65]++;

    }
    for(i = 0; i < 26; i++){
        if(a[i] > 0){
            printf("%c : %d\n", 'A'+i, a[i]);
        }
    }
}