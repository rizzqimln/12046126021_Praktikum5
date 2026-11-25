/*
 * Program  : Praktikum 5 - Kasus 1 (Kalkulator Modular)
 * Nama     : Rizzqi Maulana Ilhami
 * NIM      : 12046126021
 * Kelas    : S1 SI
 * Tanggal  : 25 November 2026
 * Deskripsi: 4 fungsi matematika dasar dengan prototipe dan modularitas
 */

#include <stdio.h>

float tambah(float a, float b);
float kurang(float a, float b);
float kali(float a, float b);
float bagi(float a, float b);

int main() {
    float angka1, angka2;

    printf("=== KALKULATOR SEDERHANA ===\n");
    printf("Masukkan angka pertama : ");
    scanf("%f", &angka1);
    printf("Masukkan angka kedua   : ");
    scanf("%f", &angka2);

    printf("\n=== HASIL OPERASI ===\n");
    printf("%.2f + %.2f = %.2f\n", angka1, angka2, tambah(angka1, angka2));
    printf("%.2f - %.2f = %.2f\n", angka1, angka2, kurang(angka1, angka2));
    printf("%.2f * %.2f = %.2f\n", angka1, angka2, kali(angka1, angka2));
    if (angka2 != 0) {
        printf("%.2f / %.2f = %.2f\n", angka1, angka2, bagi(angka1, angka2));
    } else {
        printf("Pembagian oleh nol tidak terdefinisi.\n");
    }
    return 0;
}

// Definisi fungsi
float tambah(float a, float b) {
    return a + b;
}

float kurang(float a, float b) {
    return a - b;
}

float kali(float a, float b) {
    return a * b;
}

float bagi(float a, float b) {
    return a / b;
}
