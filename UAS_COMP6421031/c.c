#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil - LB75 - UAS Algorithm and Programming (SOCS Problem C)
typedef struct test {
    char nama[200];
}nama;

void swap(nama* mahasiswaA, nama* mahasiswaB) {
    nama temp = *mahasiswaA;
    *mahasiswaA = *mahasiswaB;
    *mahasiswaB = temp;
}

int partition(nama mahasiswa[], int mulai, int akhir) {
    nama pivot = mahasiswa[akhir];
    int i = (mulai - 1);

    //sorting ascending berdasarkan NIM
    for (int j = mulai; j <= akhir - 1; j++) {
        if (strcmp(mahasiswa[j].nama, pivot.nama) < 0) {
            i++;
            swap(&mahasiswa[i], &mahasiswa[j]);
        }
    }

    swap(&mahasiswa[i + 1], &mahasiswa[akhir]);
    return(i + 1);
}

void quickSort(nama mahasiswa[], int mulai, int akhir) {
    if (mulai < akhir) {
        int tengah = partition(mahasiswa, mulai, akhir);
        quickSort(mahasiswa, mulai, tengah - 1);
        quickSort(mahasiswa, tengah + 1, akhir);
    }
}

int main() {
    int tc;
    scanf("%d", &tc);
    nama test[tc];
    for (int i = 0; i < tc; i++) {
        scanf("%s", test[i].nama);
    }
    quickSort(test, 0, tc - 1);
    for (int i = 0; i < tc; i++) {
        printf("%s\n", test[i].nama);
    }
}