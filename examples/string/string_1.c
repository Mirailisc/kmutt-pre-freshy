#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;
    char str[32] = "CPE";

    while (str[count] != '\0')
    {
        count++;
    }

    printf("%d\n", count);

    return 0;
}