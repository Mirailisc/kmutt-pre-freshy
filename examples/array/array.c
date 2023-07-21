#include <stdio.h>

int main()
{
    int student[10][2], weight, height;

    for (int i = 0; i < 10; i++)
    {

        int index = i + 1;

        printf("Enter student %d's weight :", index);
        scanf("%d", &weight);

        printf("Enter student %d's height :", index);
        scanf("%d", &height);

        student[i][0] = weight;
        student[i][1] = height;
    }

    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            int index = i + 1;

            printf("Student no.%d has weight: ", index);
            printf("%d\n", student[i][0]);

            printf("Student no.%d has height: ", index);
            printf("%d\n", student[i][1]);
        }
    }

    return 0;
}