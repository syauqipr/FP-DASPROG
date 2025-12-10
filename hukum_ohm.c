#include <stdio.h>

static void garis() {
    printf("+");
    for (int i = 0; i < 42; i++) {
        printf("-");
    }
    printf("+\n");
}

void hukum_ohm() {
    int pilihan = 0; 
    float V, I, R;

    while (pilihan != 4) {

        garis();
        printf("|               KALKULATOR OHM             |\n");
        garis();
        printf("| Rumus Hukum Ohm:                         |\n");
        printf("| 1) V = I x R                             |\n");
        printf("| 2) I = V / R                             |\n");
        printf("| 3) R = V / I                             |\n");
        garis();

        printf("|                  MENU                    |\n");
        garis();
        printf("| 1. Cari Tegangan (V = I x R)             |\n");
        printf("| 2. Cari Arus     (I = V / R)             |\n");
        printf("| 3. Cari Hambatan (R = V / I)             |\n");
        printf("| 4. Kembali ke menu utama                 |\n");
        garis();
        printf("Pilih (1-4): ");
        scanf("%d", &pilihan);
        garis();

        if (pilihan == 1) {
            printf("Masukkan ARUS (I) : ");
            scanf("%f", &I);
            printf("Masukkan HAMBATAN (R) : ");
            scanf("%f", &R);
            V = I * R;
            printf("Tegangan (V) = %.2f Volt\n\n", V);
        }

        else if (pilihan == 2) {
            printf("Masukkan TEGANGAN (V) : ");
            scanf("%f", &V);
            printf("Masukkan HAMBATAN (R) : ");
            scanf("%f", &R);
            I = V / R;
            printf("Arus (I) = %.2f Ampere\n\n", I);
        }

        else if (pilihan == 3) {
            printf("Masukkan TEGANGAN (V) : ");
            scanf("%f", &V);
            printf("Masukkan ARUS (I) : ");
            scanf("%f", &I);
            R = V / I;
            printf("Hambatan (R) = %.2f Ohm\n\n", R);
        }

        else if (pilihan == 4) {
            printf("Kembali ke menu utama...\n\n");
        }

        else {
            printf("Pilihan tidak valid! Masukkan 1-4.\n\n");
        }
    }
}
