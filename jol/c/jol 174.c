#include <stdio.h>

int sc(int a, int b, int c)
{
    return a+ b+ c;
}


int main()
{
    int score[4][4] = {0};
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &score[i][j]);
        }
        score[i][3] = sc(score[i][0], score[i][1], score[i][2]);
    }

    for(int i = 0; i < 4; i++)
    {
        score[3][i] = score[0][i] + score[1][i] + score[2][i];
    }
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%d ",score[i][j]);
        }
        printf("\n");
    }
    
}

