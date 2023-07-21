#include <stdio.h>

int main()
{
    int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    if (number % 2)
    {
        printf("%d", number);
        printf(" is Odd");
    }
    else
    {
        printf("%d", number);
        printf(" is Even");
    }

    return 0;
}