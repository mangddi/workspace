#include <stdio.h>

typedef struct student{
    char school[21];
    int grade;
}student;

int main()
{
    student a = {
        .grade = 6,
        .school = "Jeju"
    };

    student b;
    scanf("%s", &b.school);
    scanf("%d", &b.grade);

    printf("%d grade in %s School \n",a.grade, a.school);
    printf("%d grade in %s School \n",b.grade, b.school);

    return 0;


}