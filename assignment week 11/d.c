#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil
typedef struct test{
    char nama[100];
    char nick[100];
}test;

int binarySearch(test testing[], char nick[], int kiri, int kanan){
    int tengah;
    while(kiri <= kanan){
        tengah = (kiri + kanan) / 2;
        if(strcmp(nick, testing[tengah].nama) == 0){
            return tengah;
        }
        if(strcmp(nick, testing[tengah].nama) < 0){
            kanan = tengah - 1;
        }
        if(strcmp(nick, testing[tengah].nama) > 0){
            kiri = tengah + 1;
        }
    }
    return -1;
}

int main(){
    test testing[100];
    FILE *fp;
    fp = fopen("testdata.in", "r");
    int tc;
    fscanf(fp, "%d", &tc);
    for(int i = 0; i < tc; i++){
        fscanf(fp, " %[^#]#%[^\n]", &testing[i].nama, &testing[i].nick);
    }
    // for(int i = 0; i < tc; i++){
    //     printf("%s %s\n", testing[i].nama, testing[i].nick);
    // }
    int tc2;
    fscanf(fp, "%d", &tc2);
    int index = 1;
    for(int i = 0; i < tc2; i++){
        char temp[40];
        fscanf(fp, "%s\n", &temp);
        // printf("%s\n", temp);
        int ketemu = binarySearch(testing, temp, 0, tc - 1);
        // printf("%d\n", ketemu);
        if(ketemu == -1){
            printf("Case #%d: N/A\n", index);
        }
        else{
            printf("Case #%d: %s\n", index, testing[ketemu].nick);
        }
        index++;
    }
    fclose(fp);
}