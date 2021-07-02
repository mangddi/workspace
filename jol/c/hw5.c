#include <stdio.h>

int main()
{
    int i, j, tmp1 = 0;
    int tmp2 = 0;
    int rank[5] = {0};
    int a[5][5] = {{101}, {102}, {103}, {104}, {105}};
    int num;

    for(i = 0; i < 5; i++){
         
            printf("학생 %d의 중간고사 성적을 입력하시오.", a[i][0]);
            scanf(" %d", &a[i][1]);
            printf("학생 %d의 기말고사 성적을 입력하시오.", a[i][0]);
            scanf(" %d", &a[i][2]);

            a[i][3] = a[i][1] + a[i][2];
            printf("학생 %d의 총점 : %d\n\n", a[i][0], a[i][3]);        
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
        printf("학생 %d의 총점 : %d, 등수 : %d ", a[i][0], a[i][3], a[i][4]);
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
        printf("학생 %d의 총점 : %d, 등수 : %d ", a[i][0], a[i][3], a[i][4]);
        printf("\n");
    }

    printf("찾고자 하는 학생의 등수를 입력하시오.");
    scanf(" %d", &num);
    for(i = 0; i < 5; i++){
    if(a[i][4] == num){

        printf("%d등인 학생의 학번은 %d 입니다.", a[i][4], a[i][0]);
        break;
    }
    }
}

