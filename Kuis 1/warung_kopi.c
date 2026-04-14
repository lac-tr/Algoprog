#include <stdio.h>

int main (){
    int day, modTM, modPG;

    scanf ("%d", &day);

    modTM = day % 3;
    modPG = day % 5;

    if (modPG == 1 && modTM == 1){
        printf("TEMPE DAN PISGOR\n");
    } else if (modPG == 1 && modTM != 1){
        printf("PISGOR\n");
    }else if (modPG != 1 && modTM == 1){
        printf("TEMPE\n");
    } else if (modPG != 1 && modTM != 1){
        printf("KOSONG\n");
    }

    return 0;
}
