/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
*   Modul               : N
*   Hari dan Tanggal    : Rabu, 22 april 2026
*   Nama (NIM)          : Ahmad Akhdan Tristan Salman (13224039)
*   Nama File           : soal1.c
*   Deskripsi           : Program untuk analisis pointer
* 
*/


#include <stdio.h>
#include <string.h>
  
void hitung_avg(int *arr, int n, float *avg) {
    float sum = 0;
    float hasil;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    hasil = sum / n;
    *avg = hasil;
}

void hitung_sum(int *arr, int n, int* sum) {
    int hasil = 0;
    for (int i = 0; i < n; i++) {
        hasil += arr[i];
    }
    *sum = hasil;
    
}

void cari_max(int *arr, int n, int *max) {
    int hasil = *arr;
    for (int *p = arr + 1; p < arr + n; p++) {
        if (*p > hasil) {
            hasil = *p;
        }
    }
    *max = hasil;
}

void first_idx(int *arr, int n, int *idx) {
    int IDX = 0;
    int MAX = *arr;
    for (int *p = arr + 1; p < arr + n; p++) {
        if (*p > MAX) {
            MAX = *p;
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == MAX) {
            IDX = i;
            break; 
        }
    }
    *idx = IDX;
}

int main() {
    int n;
    scanf("%d", &n);
    int nilai[1000];
    int *arr[1000];
    float AVG;
    int SUM;
    int MAX;
    int IDX;

    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai[i]);
        arr[i] = &nilai[i];
    }

    hitung_sum(nilai, n, &SUM);
    printf("\nSUM %d", SUM);

    hitung_avg(nilai, n, &AVG);
    printf("\nAVG %.2f", AVG);

    cari_max(nilai, n, &MAX);
    printf("\nMAX %d", MAX);
    
    first_idx(nilai, n, &IDX);
    printf("\nIDX %d", IDX);

    return 0;
}
 
