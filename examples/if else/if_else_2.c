#include <stdio.h>

int main()
{
    int score;

    printf("Enter your score: ");
    scanf("%d", &score);

    if (score >= 80)
    {
        printf("%d", score);
        printf(" : A");
    }
    else if (score >= 60)
    {
        printf("%d", score);
        printf(" : B");
    }
    else if (score >= 40)
    {
        printf("%d", score);
        printf(" : C");
    }
    else
    {
        printf("%d", score);
        printf(" : Fail");
    }

    return 0;
}