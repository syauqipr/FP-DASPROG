#include <stdio.h>
#include "kalkulator.h"

void seri(){

    int num;
    float result;

    printf("Jumlah resistor : ");
    scanf("%d", &num);

    float res[num];

    for(int i = 1; i <= num; i++){
        
        printf("Besar hambatan %d: ", i);
        scanf("%f", &res[i-1]);

    }

    for(int i = 0; i < num; i++){
        result += res[i];
    }

    printf("Resistor Equivalent : %.3f\n", result);
    printf("\n");
}