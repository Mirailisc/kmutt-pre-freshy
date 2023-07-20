#include <stdio.h>

int main()
{
    int pen;
    int price;
    int total;

    price = 5;

    printf("Enter the number of the pen: ");
    scanf("%d", &pen);

    total = pen * price;

    printf("%d THB", total);

    return 0;
}