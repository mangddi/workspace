#include <stdio.h>

int main()
{
    int i, j, tmp1 = 0;
    int tmp2 = 0;
    int rank[5] = {0};
    int a[5][5] = {{101}, {102}, {103}, {104}, {105}};
    int num;

    for(i = 0; i < 5; i++){
         
            printf("�л� %d�� �߰���� ������ �Է��Ͻÿ�.", a[i][0]);
            scanf(" %d", &a[i][1]);
            printf("�л� %d�� �⸻��� ������ �Է��Ͻÿ�.", a[i][0]);
            scanf(" %d", &a[i][2]);

            a[i][3] = a[i][1] + a[i][2];
            printf("�л� %d�� ���� : %d\n\n", a[i][0], a[i][3]);        
    }

    for(i = 0; i < 5; i++){
        rank[i] = a[i][3];
    }

    for(i = 0; i < 5; i++){
        for(j = 1 + i; j < 5; j++){
        if(rank[i] < rank[j]){
            tmp1 = rank[i];
            rank[i] = rank[j];
            rank[j] = tmp1;
        }
    }    
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(rank[j] == a[i][3]) {
            a[i][4] = j + 1;
            }
        }
    }
        
    for(i = 0; i < 5; i++){
        for(j = i + 1; j < 5; j++){
            if(a[i][3] < a[j][3]){                
                for(int k = 0; k < 5; k++){            
                tmp2 = a[i][k];
                a[i][k] = a[j][k];
                a[j][k] = tmp2;

            }
        }
    }
 }
    for(i = 0; i < 5; i++){     
        printf("�л� %d�� ���� : %d, ��� : %d ", a[i][0], a[i][3], a[i][4]);
        printf("\n");
    }

    printf("\n");

    for(i = 0; i < 5; i++){
        for(j = i + 1; j < 5; j++){
            if(a[i][0] < a[j][0]){                
                for(int k = 0; k < 5; k++){            
                tmp2 = a[i][k];
                a[i][k] = a[j][k];
                a[j][k] = tmp2;

            }
        }
    }

 }


    for(i = 4; i >= 0; i--){     
        printf("�л� %d�� ���� : %d, ��� : %d ", a[i][0], a[i][3], a[i][4]);
        printf("\n");
    }

    printf("ã���� �ϴ� �л��� ����� �Է��Ͻÿ�.");
    scanf(" %d", &num);
    for(i = 0; i < 5; i++){
    if(a[i][4] == num){

        printf("%d���� �л��� �й��� %d �Դϴ�.", a[i][4], a[i][0]);
        break;
    }
    }
}

