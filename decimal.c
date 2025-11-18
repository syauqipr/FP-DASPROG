#include <stdio.h>
#include <math.h>
#include "kalkulator.h"

int digit_oktal(float num) {
    int result;
    for(int i = 5; i >= 0 ; i--){
        if(num >=  pow(8,i)) {
            result = 1 + i;
            break;

        }
    }
    return result;
}
int digit_heksa(float num){
    int result = 0;
    int temp = num;
    do{
        temp /= 16;
        ++result;
    }while(temp != 0);

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
    
    printf("-Biner        : ");
    for(int i = 0; i < bit; i++){
        printf("%d", biner[i]);
    }
    printf("\n");

    //konversi ke Oktal

    temp1 = num;

    int digit = digit_oktal(num);
    int oktal[digit];

    for(int i = 1; i <= digit; i++ ){
        oktal[digit-i] = temp1 % 8;
        temp1 /= 8;
    }

    printf("-Oktal        : ");
    for(int i = 0; i < digit; i++){
        printf("%d", oktal[i]);
    }
    printf("\n");

    // konversi ke heksadesimal

    temp1 = num;
    digit = digit_heksa(num);
    int heksa[digit];

    for(int i = digit-1; i >= 0; i--){
        heksa[i] = temp1 % 16;
        temp1 /= 16;
    }

    printf("-Heksadesimal : ");
    for(int i = 0; i < digit; i++){
        switch(heksa[i]){
            case 10:
                printf("A");
                continue;
            case 11:
                printf("B");
                continue;
            case 12:
                printf("C");
                continue;
            case 13:
                printf("D");
               continue;
            case 14:
                printf("E");
                continue;
            case 15:
                printf("F");
                continue;
            default:
                break;
        }
        printf("%d", heksa[i]);
    }
    printf("\n");
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      