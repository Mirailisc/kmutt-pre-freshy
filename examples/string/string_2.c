#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, j = 0;
    char str1[32] = "123";
    char str2[32] = "456";

    for (i = 3; i <= 5; i++)
    {
        str1[i] = str2[j];
        j++;
    }

    printf("%s", str1);

    return 0;
}