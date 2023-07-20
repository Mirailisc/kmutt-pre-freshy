#include <stdio.h>

int main()
{
    int exam;
    int homework;
    int total;

    printf("Enter your exam score: ");
    scanf("%d", &exam);

    printf("Enter your homework score: ");
    scanf("%d", &homework);

    total = exam + homework;

    if (total >= 50)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}