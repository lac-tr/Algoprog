#include <stdio.h>

int main()
{
    int uts, uas;
    int avg;

    scanf("%d %d", &uts, &uas);

    avg = (uts + uas) / 2;

    if (uts > 40 && uas > 40 && avg > 60)
    {
        printf("LULUS\n");
    }
    else if ((uts <= 40 || uas <= 40) && avg > 60)
    {
        printf("LULUS BERSYARAT\n");
    }
    else if (avg < 60)
    {
        printf("TIDAK LULUS\n");
    }

    return 0;
}
