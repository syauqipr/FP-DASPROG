#include <stdio.h>
#include <stdlib.h>
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
    printf("|   3. SEIRES RESISTORS                          |\n");
    printf("|   4. PARALEL RESISTORS                         |\n");
    printf("|   9. QUIT                                      |\n\n");

    if(opt > 9 || opt < 1 ) {
        printf("\n");
        printf("Input according to the options provided!!!\n");
    }

    printf("Choose an Option : ");
    scanf(" %d", &opt);

    switch(opt){
        case 3 :
            printf("\n");
            seri();

            break;
        case 4:
            printf("\n");
            paralel();

            break;

        case 9:
            exit(0);

        default :
            system("clear");
            mulai(opt);
    }

    getchar();
    printf("---TEKAN ENTER UNTUK KEMBALI KE MENU UTAMA---");
    dec = getchar();
    if(dec == '\n') {
        system("clear");
        mulai(1);
    }

}
int main(){

    mulai(1);
    
    return 0;
}