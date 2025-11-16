#include <stdio.h>
#include <stdlib.h>
#include "kalkulator.h"

char ask(){
    char ans;
    do{
        print("\n");
        printf("Calculate Again? (Y/N) : ");
        canf("%c", &ans);
        if(ans != 'A' && ans != 'B') {
            print("\n");
            printf("Input according to the options provided!!!");
        }
        
    } while(ans != 'Y' && ans != 'N');

    return ans;
}

int rerun(char dec) {
    if(dec == 'Y'){
            system("cls");
            mulai();
        }else {
            system("cls");
            return 1;
        }
}
void mulai(){
    char opt;
    char dec;
    printf("======SIMPLE CALCULATOR======\n");
    printf("CALCULATOR OPTION");
    printf("A. SEIRES RESISTORS\n");
    printf("A. PARALEL RESISTORS\n\n");

    do{
    printf("Choose Calculator : ");
    scanf("%c", &opt);
    if(opt != 'A' && opt != 'B') {
        print("\n");
        printf("Input according to the options provided!!!");
    }
    } 
    while(opt != 'A' && opt != 'B');

    if(opt == 'A'){
        seri();
        dec = ask();
        if(rerun(dec)){
            return;
        }
    }else if(opt == 'B'){
        paralel();
        dec = ask();
        if(rerun(dec)){
            return;
        }
    }

}
int main(){

    seri();
    
    return 0;
}