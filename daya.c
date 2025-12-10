#include <stdio.h>

static void garis() {
    printf("+");
    for (int i = 0; i < 42; i++) {
        printf("-");
    }
    printf("+\n");
}


void daya() {
    int pilihan = 0; 
    float V, I, R, P;

    while (pilihan != 4) {

        garis();
        printf("|        KALKULATOR DAYA LISTRIK           |\n");
        garis();

        printf("| Daya (P) memiliki satuan Watt            |\n");
        printf("| Rumus daya:                              |\n");
        printf("| 1) P = V x I                             |\n");
        printf("| 2) P = I^2 x R                           |\n");
        printf("| 3) P = V^2 / R                           |\n");
        garis();

        printf("|                  MENU                    |\n");
        garis();
        printf("| 1. Hitung dari V dan I                   |\n");
        printf("| 2. Hitung dari I dan R                   |\n");
        printf("| 3. Hitung dari V dan R                   |\n");
        printf("| 4. Keluar                                |\n");
        garis();
        printf("| Pilih (1-4): ");
        scanf("%d", &pilihan);
        garis();

        if (pilihan == 1) {
            printf(" Masukkan Tegangan (V): ");
            scanf("%f", &V);
            printf(" Masukkan Arus (I): ");
            scanf("%f", &I);
            P = V * I;
            printf(" Daya (P) = %.2f Watt\n", P);
        }
        else if (pilihan == 2) {
            printf(" Masukkan Arus (I): ");
            scanf("%f", &I);
            printf(" Masukkan Hambatan (R): ");
            scanf("%f", &R);
            P = I * I * R;
            printf(" Daya (P) = %.2f Watt\n", P);
        }
        else if (pilihan == 3) {
            printf(" Masukkan Tegangan (V): ");
            scanf("%f", &V);
            printf(" Masukkan Hambatan (R): ");
            scanf("%f", &R);
            P = (V * V) / R;
            printf(" Daya (P) = %.2f Watt\n", P);
        }
        else if (pilihan == 4) {
            printf("Keluar program...\n");
        }
        else {
            printf(" Pilihan tidak valid! Masukkan angka 1-4.\n");
        }
    }
}
