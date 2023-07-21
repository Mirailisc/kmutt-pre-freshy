#include <stdio.h>

int main()
{
    char name[3][15] = {"John Doe", "Jane Doe", "Lorem Ipsum"};

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}