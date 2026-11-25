/*
 * Program  : Praktikum 5 - Kasus 2 (Sistem Hitung Gaji Karyawan)
 * Nama     : Rizzqi Maulana Ilhami
 * NIM      : 12046126021
 * Kelas    : S1 SI
 * Tanggal  : 25 November 2026
 * Deskripsi: Sistem Hitung Gaji Karyawan dengan menggunakan 3 fungsi
 */

#include <stdio.h>

float hitungTunjangan(float gaji_pokok);
float hitungLembur(int jam);
float hitungGajiTotal(float gaji_pokok, float tunjangan, float lembur);

int main() {
    float gaji_pokok;
    int jam_lembur;

    printf("=== SISTEM PENGGAJIAN KARYAWAN ===\n");
    printf("Masukkan gaji pokok (Rp): ");
    scanf("%f", &gaji_pokok);
    printf("Masukkan jam lembur     : ");
    scanf("%d", &jam_lembur);

    // Panggil fungsi-fungsi
    float tunjangan = hitungTunjangan(gaji_pokok);
    float upah_lembur = hitungLembur(jam_lembur);
    float total = hitungGajiTotal(gaji_pokok, tunjangan, upah_lembur);

    //Tampilkan rincian gaji
    printf("\n=== RINCIAN GAJI ===\n");
    printf("Gaji Pokok  : Rp %.2f\n", gaji_pokok);
    printf("Tunjangan   : Rp %.2f\n", tunjangan);
    printf("Upah Lembur : Rp %.2f\n", upah_lembur);
    printf("----------------------------\n");
    printf("GAJI TOTAL  : Rp %.2f\n", total);
    return 0;
}

float hitungTunjangan (float gaji_pokok) {
    return gaji_pokok * 0.10;
}

float hitungLembur (int jam) {
    return jam * 25000.0;
}

float hitungGajiTotal (float gaji_pokok, float tunjangan, float lembur) {
    return gaji_pokok + tunjangan + lembur;
}
