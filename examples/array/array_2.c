#include <stdio.h>

int main()
{
    int subjectScore[5], score, totalScore = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter subject %d's score: ", i + 1);
        scanf("%d", &score);

        subjectScore[i] = score;
        totalScore += subjectScore[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d : ", i);
        printf("%d\n", subjectScore[i]);
    }

    printf("Total : %d\n", totalScore);
    printf("Average : %d\n", totalScore / 5);

    return 0;
}