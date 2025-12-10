#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "kalkulator.h"

void mulai(int opt){
    char dec;
    
    for(int i = 0; i < 50; i ++){
        printf("="); 
    }
    printf("\n");
    printf("|  TOOLKIT LENGKAP ASISTEN LABORATORIUM ELEKTRO  |\n");
    for(int i = 0; i < 50; i ++){
        printf("="); 
    }
    printf("\n");
    printf("|     ----VERIFIKASI RANGLKAIAN LISTRIK----      |\n");
    printf("|   1. Kalkulator Hukum Ohm (V = I * R )         |\n");
    printf("|   2. Kalkulator Daya Listrik (P = V * I)       |\n");
    printf("|   3. Resistor Seri                             |\n");
    printf("|   4. Resistor Paralel                          |\n");
    printf("|                                                |\n");
    printf("|        ----UTILITAS SISTEM DIGITAL----         |\n");
    printf("|   5. Desimal -> Biner / Oktal / Heksadesimal)  |\n");
    printf("|   6. Biner -> Desimal                          |\n");
    printf("|   7. Oktal -> Desimal                          |\n");
    printf("|   8. Heksadesimal -> Desimal                   |\n");
    printf("|                                                |\n");
    printf("|   9. Exit                                      |\n");
    for(int i = 0; i < 50; i ++){
        printf("="); 
    }
    printf("\n");

    if(opt > 9 || opt < 1 ) {
        printf("\n");
        printf("Input according to the options provided!!!\n");
    }

    printf("Choose an Option : ");
    scanf(" %d", &opt);

    switch(opt){
        case 1:

            break;
        case 2:
            printf("\n");
            daya();

            break;
        case 3 :
            printf("\n");
            seri();

            break;
        case 4:
            printf("\n");
            paralel();

            break;
        case 5:
            decimal();

            break;
        case 6:

            break;
        case 7:

            break;
        case 8:

            break;
        case 9:
            exit(0);

        default :
            system("clear");
            mulai(opt);
    }

    getchar();
    printf("---TEKAN ENTER UNTUK KEMBALI KE MENU UTAMA---");
    if(getchar() == '\n') {
        system("clear");
        mulai(1);
    }

}
int main(){

    mulai(1);
    
    return 0;
}
