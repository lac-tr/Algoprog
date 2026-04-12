#include <stdio.h>

int main() {
    double p, n, sum, pajak, hasil;
    
    scanf("%lf %lf", &p, &n);
    
    pajak = p * n * 1.1;
    
    printf("%.2lf\n", pajak);


    return 0;
}
