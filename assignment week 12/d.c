#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil

typedef struct makanan{
    char akronim[150];
    char original[150];
    char cari[150];
}makanan;

// int partition(makanan test[], int mulai, int akhir){
//     makanan temp[3];
//     makanan pivot = test[akhir];
//     int i  = mulai - 1;
//     for(int j = mulai; j <= akhir - 1; j++){
//         if(strcmp(test[j].akronim, pivot.akronim) < 0){
//             i++;
//             temp[0] = test[i];
//             test[i] = test[j];
//             test[j] = temp[0];
//         }
//     }
//     temp[1] = test[i+1];
//     test[i+1] = test[akhir];
//     test[akhir] = temp[1];
//     return(i + 1);
// }

// void quickSort(makanan test[], int mulai ,int akhir){
//     if(mulai < akhir){
//         int tengah = partition(test, mulai, akhir);
//         quickSort(test, mulai, tengah - 1);
//         quickSort(test, tengah + 1, akhir);
//     }
// }

// int binarySearch(makanan test[], char cari[], int kiri, int kanan){
//     int tengah;
//     while(kiri <= kanan){
//         tengah = (kiri + kanan) / 2;
//         if(strcmp(cari, test[tengah].akronim) == 0){
//             return tengah;
//         }
//         if(strcmp(cari, test[tengah].akronim) < 0 ){
//             kanan = tengah -1;
//         }
//         if(strcmp(cari, test[tengah].akronim) > 0){
//             kiri = tengah + 1;
//         }
//     }
//     return -1;
// }

int linearSearch(makanan test[], char cari[], int kiri, int kanan){
    for(int j = 0; j < kanan; j++){
        if(strcmp(cari, test[j].akronim) == 0){
            return j;
        }
    }
    return -1;
}

int main(){
    FILE *fp;
    fp = fopen("testdata.in", "r");
    makanan test[1000];
    int tc;
    fscanf(fp, "%d\n", &tc);
    for(int i = 0; i < tc; i++){
        fscanf(fp, " %[^#]#%[^\n]", test[i].akronim, test[i].original);
    }
    // quickSort(test, 0, tc);
    // for(int i = 0; i < tc; i++){
    //     // printf("%d", i);
    //     printf("%s\n", test[i].akronim);
    // }
    int tc2;
    char input[5000];
    const char spasi[2] = " ";
    fscanf(fp, "%d\n", &tc2);
    for(int i  = 0; i < tc2; i++){
        int banyakkata = 0;
        printf("Case #%d:\n", i + 1);
        fscanf(fp, " %[^\n]", &input);
        char *token = strtok(input, spasi);
        while(token != NULL){
            int index = linearSearch(test, token, 0, tc);
            if(banyakkata != 0 && index != -1){
                printf(" %s", test[index].original);
            }
            else if(index != -1 && banyakkata == 0){
                printf("%s", test[index].original);
            }
            else if(index == -1 && banyakkata == 0){
                printf("%s", token);
            }
            else{
                printf(" %s", token);
            }
            token = strtok(NULL, " ");
            banyakkata++;
        }
        printf("\n");
    }
    fclose(fp);
}