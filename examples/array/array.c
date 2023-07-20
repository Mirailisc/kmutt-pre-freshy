#include <stdio.h>

int main()
{
    int student[3][2];

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            int weight;
            int height;

            int index = i + 1;

            if (j == 0)
            {
                printf("Enter student %d's weight :", index);
                scanf("%d", &weight);

                student[i][j] = weight;
            }
            else
            {
                printf("Enter student %d's height :", index);
                scanf("%d", &height);

                student[i][j] = height;
            }
        }
    }

    for (int i = 0; i < 3; i++)
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