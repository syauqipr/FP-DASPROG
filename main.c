#include <stdio.h>
#include <stdlib.h>
#include "kalkulator.h"

void mulai();
char ask(){
    char ans;
    do{
        printf("\n");
        printf("Calculate Again? (Y/N) : ");
        scanf(" %c", &ans);
        if(ans != 'Y' && ans != 'N') {
            printf("\n");
            printf("Input according to the options provided!!!");
        }
        
    } while(ans != 'Y' && ans != 'N');

    return ans;
}

int rerun(char dec) {
    if(dec == 'Y'){
        system("clear");
        mulai();
        return 0;
    }else {
        system("clear");
        return 1;
    }
}
void mulai(){
    int opt;
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
    printf("|   4. PARALEL RESISTORS                         |\n\n");

    do{
    printf("Choose Calculator : ");
    scanf(" %d", &opt);
    if(opt > 9 && opt < 1 ) {
        printf("\n");
        printf("Input according to the options provided!!!");
    }
    } 
    while(opt > 9 && opt < 1 );

    if(opt == 3 ){
        seri();
        dec = ask();
        if(rerun(dec)){
            return;
        }
    }else if(opt == 4 ){
        paralel();
        dec = ask();
        if(rerun(dec)){
            return;
        }
    }

}
int main(){

    mulai();
    
    return 0;
}