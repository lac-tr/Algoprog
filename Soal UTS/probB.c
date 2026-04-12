#include <stdio.h>

int main() {
    double sell, temp, day;
    double max = 0;
    double sum = 0;
    double avg = 0;
    double count= 0;
    
    for (int i = 0; i < 7; i++){
        scanf("%lf", & sell);
        sum += sell;
        if (sell > max){
            max = sell;
            day = i;
        }
        count++;
        avg = sum * 1.0 / count * 1.0;
        //printf("%.2lf-%lf/%lf\n", avg, sum, count);
    }
    
    printf("\n%.2lf\n%.0lf\n", avg, max);
    
    if (day == 0){
        printf("Minggu\n");
    }else if (day == 1){
        printf("Senin\n");
    }else if (day == 2){
        printf("Selasa\n");
    }else if (day == 3){
        printf("Rabu\n");
    }else if (day == 4){
        printf("Kamis\n");
    }else if (day == 5){
        printf("Jumat\n");
    }else if (day == 6){
        printf("Sabtu\n");
    }
    
    return 0;
}
