#include <stdio.h>
#include <stdlib.h> // Untuk system("cls")

int main() {
    system("cls"); // Membersihkan layar di Windows

    char nama[100];
    int umur;
    float nilai;

    printf("Masukkan nama Anda: ");
    gets(nama);

    printf("Masukkan umur Anda: ");
    scanf("%d", &umur);

    printf("Masukkan nilai Anda: ");
    scanf("%f", &nilai);

    printf("Nama Anda: %s\n", nama);
    printf("Umur Anda: %d\n", umur);
    printf("Anda memperoleh nilai %5.2f\n", nilai);

    printf("Tekan tombol apa pun untuk melanjutkan...");
    getchar(); // Mengganti getch() dengan getchar()

    return 0;
}
