#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil

typedef struct mahasiswa{
    char nim[15];
    char nama[30];
}MAHASISWA;

int main(){
    FILE *fp;
    fp = fopen("testdata.in", "r");
    int banyak;
    fscanf(fp, "%d", &banyak);
    MAHASISWA mahasiswa[1000];
    MAHASISWA temp;
    for(int i = 0; i < banyak; i++){
        fscanf(fp, "%s %s\n", &mahasiswa[i].nim, &mahasiswa[i].nama);
    }
    for(int i = 0; i < banyak; i++){
        for(int j = 0; j < banyak; j++){
            if(strcmp(mahasiswa[i].nim, mahasiswa[j].nim) < 0){
                temp = mahasiswa[i];
                mahasiswa[i] = mahasiswa[j];
                mahasiswa[j] = temp;
            }
        }
    }
    for(int i = 0; i < banyak; i++){
        printf("%s %s\n", mahasiswa[i].nim, mahasiswa[i].nama);
    }
}