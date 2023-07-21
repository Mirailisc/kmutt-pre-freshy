#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter your start number: ");
    scanf("%d", &num1);

    printf("Enter your end number: ");
    scanf("%d", &num2);

    for (int i = num1; i <= num2; i++)
    {
        int flag = 0;

        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                flag++;
            }
        }

        if (flag == 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}