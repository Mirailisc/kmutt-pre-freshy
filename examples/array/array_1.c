#include <stdio.h>

int main()
{
    int score[7] = {81, 69, 45, 76};

    score[3] = 44;
    score[4] = 91;

    printf("%d", score[3]);

    return 0;
}