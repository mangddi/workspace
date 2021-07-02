#include <stdio.h>

typedef struct  student
{
    char name[20];
    int lang;
    int math;

}student;


int main()
{
    student a;
    scanf("%s %d %d", &a.name, &a.lang, &a.math);

    student b;
    scanf("%s %d %d", &b.name, &b.lang, &b.math);

    printf("%s %d %d", &a.name, a.lang, a.math);
    printf("%s %d %d", &b.name, b.lang, b.math);
    printf("avg %d %d", (a.lang + b.lang)/2 , (a.math + b.math)/2 );

    return 0;

    
}