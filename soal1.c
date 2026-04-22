/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
*   Modul               : N
*   Hari dan Tanggal    : 
*   Nama (NIM)          : 
*   Nama File           : soal1.c
*   Deskripsi           : 
* 
*/


#include <stdio.h>
#include <string.h>
  
float hitung_avg(int *arr, int n) {
    float sum = 0;
    float hasil;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    hasil = sum / n;
    return hasil;
}

int hitung_sum(int *arr, int n) {
    int hasil = 0;
    for (int i = 0; i < n; i++) {
        hasil += arr[i];
    }
    return hasil;
}

int cari_max(int *arr, int n) {
    int max = *arr;
    for (int *p = arr + 1; p < arr + n; p++) {
        if (*p > max) {
            max = *p;
        }
    }
    return max;
}



int main() {
    int n;
    scanf("%d", &n);
    int nilai[1000];
    int *arr[1000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai[i]);
        arr[i] = &nilai[i];
    }

    int SUM = hitung_sum(nilai, n);
    printf("\nSUM %d", SUM);

    float AVG = hitung_avg(nilai, n);
    printf("\nAVG %.2f", AVG);

    int MAX = cari_max(nilai, n);
    printf("\nMAX %d", MAX);
    
    int IDX = 0;
    for (int i = 0; i < n; i++) {
        if (nilai[i] == MAX) {
            IDX = i;
            break; 
        }
    }
    printf("\nIDX %d", IDX);

    return 0;
}
 
