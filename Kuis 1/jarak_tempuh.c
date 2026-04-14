#include <stdio.h>

int main()
{
    int n, kec, jarak, kj;
    int temp = 0;
    int sum = 0;
    int sumj = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++){ 
        scanf("%d %d", &kec, &jarak);
        sumj = jarak - temp;
        temp += sumj;
        // printf("%d\n", sumj);
        kj = kec * sumj;
        sum = kj + sum;
        // printf("%d\n", sum);
    }

    printf ("%d\n", sum);

    return 0;
}
