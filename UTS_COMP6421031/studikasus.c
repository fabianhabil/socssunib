#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// 2501976503 - Fabian Habil - LB75 - UTS Algorithm and Programming (Studi Kasus)

int apakahangka(char angka[]){
    for(int i = 0; angka[i] != '\0'; i++){
        if(angka[i] >= '0' && angka[i] <= '9'){
            continue;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main(){
    long long int id1, id2;
    char ID1[1000], ID2[1000], OP[1000];
    double hasil, temp = 0;
    while(1){
    hasil = 0;
        while(1){
            scanf("%s", ID1);
            if(strcmp(ID1, "x") == 0){
                break;
            }
            if(strcmp(ID1, "n") == 0){
                break;
            }
            else if(apakahangka(ID1) == 0){
                printf("Input salah, Silahkan coba lagi : ");
            }
            else{
                id1 = atoll(ID1);
                break;
            }
        }
        if(strcmp(ID1, "x") == 0){
            break;
        }
        scanf("%s", &OP);
        while(1){
            scanf("%s", ID2);
            if(apakahangka(ID2) == 0){
                printf("Input kedua salah, Silahkan masukkan angka kedua : ");
            }
            else{
                id2 = atoll(ID2);
                break;
            }
        }
        if(strcmp(OP, "+") == 0){
            if(strcmp(ID1, "n") == 0){
                hasil = temp + id2;
            }
            else{
                hasil = id1 + id2;
            }
            printf("Hasil = %lf\n", hasil);
            temp = hasil;
        }
        else if(strcmp(OP, "-") == 0){
            if(strcmp(ID1, "n") == 0){
                hasil = temp - id2;
            }
            else{
                hasil = id1 - id2;
            }
            printf("Hasil = %lf\n", hasil);
            temp = hasil;
        }
        else if(strcmp(OP, "*") == 0){
            if(strcmp(ID1, "n") == 0){
                hasil = temp * id2;
            }
            else{
                hasil = id1 * id2;
            }
            printf("Hasil = %lf\n", hasil);
            temp = hasil;
        }
        else if(strcmp(OP, "/") == 0){
            if(strcmp(ID1, "n") == 0){
                hasil = temp / id2;
            }
            else{
                hasil = (double) id1 / (double) id2;
            }
            printf("Hasil = %lf\n", hasil);
            temp = hasil;
        }
    }
}