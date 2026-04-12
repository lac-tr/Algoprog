#include <stdio.h>

int main() {
    int n, q, a, b, c;
    double sum =0;
    double count = 0;
    double avg = 0;
    
    scanf("%d %d", &n, &q);
    int arr[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    // for(int i = 0; i < n; i++){
    //     printf("%d ", arr[i]);
    // }
    
    for (int i = 0; i < q; i++){
        scanf("%d %d", &a, &b);
        sum = 0;
        count = 0;
            for (int j = a-1; j < b; j++){
                sum += arr[j];
                count++;
            }
            avg = sum / count; 
            printf("Hari ke %d-%d: %.2lf\n", a, b, avg);
    }
    
    return 0;
}
