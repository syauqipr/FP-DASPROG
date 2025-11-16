#include <stdio.h>
#include <stdlib.h>
#include "kalkulator.h"

void mulai(){
    int opt = 1;
    char dec;
    
    do{
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
    printf("|   4. PARALEL RESISTORS                         |\n\n");

    if(opt > 9 || opt < 1 ) {
        printf("\n");
        printf("Input according to the options provided!!!\n");
    }

    printf("Choose an Option : ");
    scanf(" %d", &opt);
    if(opt > 9 || opt < 1 ){
        system("clear");
    }
    
    } 
    while(opt > 9 || opt < 1 );

    if(opt == 3 ){
        printf("\n");
        seri();
        getchar();
        printf("---TEKAN ENTER UNTUK KEMBALI KE MENU UTAMA---");
        dec = getchar();
        if(dec == '\n') {
            system("clear");
            mulai();
        }
        
    }else if(opt == 4 ){
        printf("\n");
        paralel();
        getchar();
        printf("---TEKAN ENTER UNTUK KEMBALI KE MENU UTAMA---");
        dec = getchar();
        if(dec == '\n') {
            system("clear");
            mulai();
        }
    }

}
int main(){

    mulai();
    
    return 0;
}