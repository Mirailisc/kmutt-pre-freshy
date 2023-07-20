#include <stdio.h>

int main()
{
    int score;

    printf("Enter your score: ");
    scanf("%d", &score);

    if (score >= 80)
    {
        printf("%d : A", score);
    }
    else if (score >= 60)
    {
        printf("%d : B", score);
    }
    else if (score >= 40)
    {
        printf("%d : C", score);
    }
    else
    {
        printf("%d : F", score);
    }

    return 0;
}