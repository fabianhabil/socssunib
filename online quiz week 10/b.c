#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  2501976503 - Fabian Habil

typedef struct tanaman{
    int id;
    char nama[50];
} tanaman;

int main(){
    FILE *file;
    file = fopen("testdata.in", "r");
    int banyak;
    fscanf(file, "%d", &banyak);
    // printf("%d\n", banyak);
    tanaman input[1000];
    for(int i = 0; i < banyak; i++){
        int id;
        char tempnama[50];
        fscanf(file, "%d", &id);
        fscanf(file, "#%[^\n]", &tempnama);
        input[i].id = id;
        strcpy(input[i].nama, tempnama);
    }

    for(int i = 0; i < banyak; i++){
        for(int j = i + 1; j < banyak; j++){
            if(strcmp(input[i].nama, input[j].nama) > 0){
                char tempp[50];
                int temp = 0;
                temp = input[i].id;
                input[i].id = input[j].id;
                input[j].id = temp;
                strcpy(tempp, input[i].nama);
                strcpy(input[i].nama, input[j].nama);
                strcpy(input[j].nama, tempp);
            }
        }
    }

    for(int i  = 0; i < banyak; i++){
        printf("%d %s\n", input[i].id, input[i].nama);
    }
    fclose(file);
}