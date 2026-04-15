#include <stdio.h>

int main()
{
    int x, y;
    int ytemp, min, max;

    scanf("%d %d", &x, &y);

    ytemp = y;

    for (int i = 0; i < y; i++)
    {
        min = x / ytemp;

        printf("%d ", min);

        x -= min;
        ytemp--;
    }


    return 0;
}
