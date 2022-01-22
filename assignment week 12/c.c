#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil

typedef struct mahasiswa{
    char nim[100];
    char nama[100];
}MAHASISWA;


int binarySearch(MAHASISWA mahasiswa[], char nick[], int kiri, int kanan){
    int tengah;
    while(kiri <= kanan){
        tengah = (kiri + kanan) / 2;
        if(strcmp(nick, mahasiswa[tengah].nim) == 0){
            return tengah;
        }
        if(strcmp(nick, mahasiswa[tengah].nim) < 0){
            kanan = tengah - 1;
        }
        if(strcmp(nick, mahasiswa[tengah].nim) > 0){
            kiri = tengah + 1;
        }
    }
    return -1;
}


int main(){
    FILE *fp;
    fp = fopen("testdata.in", "r");
    int banyak;
    fscanf(fp, "%d", &banyak);
    MAHASISWA mahasiswa[1000];
    for(int i = 0; i < banyak; i++){
        fscanf(fp, "%s %s\n", &mahasiswa[i].nim, &mahasiswa[i].nama);
    }
    int tc;
    fscanf(fp, "%d\n", &tc);
    // printf("%d\n", tc);
    for(int i = 0; i < tc; i++){
        printf("Case #%d: ", i+1);
        char nim[100];
        fscanf(fp, "%s", &nim);
        int index = binarySearch(mahasiswa, nim, 0, banyak);
        // printf("%d\n", index);
        if(index != -1){
            printf("%s\n", mahasiswa[index].nama);
        }
        else{
            printf("%s\n", "N/A");
        }
    }
}