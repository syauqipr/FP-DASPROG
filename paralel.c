#include <stdio.h>
#include "kalkulator.h"

void paralel(){
    int num;
    float temp_result = 0;
    float result = 0;


    printf("Jumlah Resistor :  ");
    scanf("%d", &num);

    float res [num];

    for(int i = 1; i <= num; i++){

        printf("Besar hambatan %d : ", i);
        scanf("%f", &res[i-1]);

    }

    for(int i = 0; i < num; i++){

        temp_result += (1/res[i]);

    }

    result = 1/temp_result;

    printf("Resistor Equivalent : %.3f ohm\n", result);
    printf("\n");

}