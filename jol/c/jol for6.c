#include <stdio.h>

int main()
{   
    int a = 0;

    


    while(1)
    {
        printf("1. Korea\n2. USA\n3. Japan\n4. China\n");
        printf("number? ");
        scanf(" %d", &a);
        printf("\n");

        if(a == 1)
        printf("Seoul\n\n");
    
        else if(a == 2)
        printf("Washington\n\n");
        
        else if(a == 3)
        printf("Tokyo\n\n");
        

        else if(a == 4)
        printf("Beijing\n\n");
        

        else{
        printf("none");
        break;
        }
        
        
 
    }
    return 0;

}