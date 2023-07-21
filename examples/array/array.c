#include <stdio.h>

int main()
{
    int healthData[10][2], weight, height;

    for (int i = 0; i < 10; i++)
    {

        int index = i + 1;

        printf("Enter student %d's weight: ", index);
        scanf("%d", &weight);

        printf("Enter student %d's height: ", index);
        scanf("%d", &height);

        healthData[i][0] = weight;
        healthData[i][1] = height;
    }

    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            int index = i + 1;

            printf("Student %d data = ", index);
            printf("%d kg ", healthData[i][0]);
            printf("%d cm\n", healthData[i][1]);
        }
    }

    return 0;
}