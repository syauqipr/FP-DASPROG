#include <stdio.h>
#include <math.h>
#include "kalkulator.h"

int digit_total(float num) {
    int result;
    for(int i = 5; i >= 0 ; i--){
        if(num >=  pow(8,i)) {
            result = 1 + i;
            break;

        }
    }
    return result;
}

void decimal() {
    float num;
    
    printf("Masukkan Bilangan desimal : ");
    scanf(" %f", &num);

    //Konversi ke Biner

    int bit;
    if(num > 255) {
        bit = 16;
    }else {
        bit = 8;
    }

    int temp1 = num;
    int biner[bit];

    for(int i = 0; i < bit; i++){
        biner[i] = 0;
    }

    for(int i = bit-1; i >= 0; i-- ){
        biner[i] = temp1 % 2;
        temp1 /= 2;
        if(temp1 == 0){
            break;
        }
    }
    
    printf("-Biner      : ");
    for(int i = 0; i < bit; i++){
        printf("%d", biner[i]);
    }
    printf("\n");

    //konversi ke Oktal
    temp1 = num;

    int digit = digit_total(num);
    int oktal[digit];

    for(int i = 1; i <= digit; i++ ){
        oktal[digit-i] = temp1 % 8;
        temp1 /= 8;
    }

    printf("-Oktal      : ");
    for(int i = 0; i < digit; i++){
        printf("%d", oktal[i]);
    }
    printf("\n");
    

}