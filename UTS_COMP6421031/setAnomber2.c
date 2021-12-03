#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 2501976503 - Fabian Habil - LB75 - UTS Algorithm and Programming (Set A Nomber 2)

long long int fpb(long long int a, long long int b){
    if (b == 0) return a;
    else return fpb(b, a % b);
}

int main(){
    long long int alas, tinggi;
    printf("\nMasukkan Alas Segitiga: ");
    scanf("%lld", &alas);
    printf("Masukkan Tinggi Segitiga: ");
    scanf("%lld", &tinggi);
    long long int miring = sqrt((alas * alas) + (tinggi * tinggi));
    long long int keliling = alas + tinggi + miring;
    long long int luas = alas * tinggi / 2;
    long long int rasio = fpb(luas, keliling);
    printf("\n1. Luas Segitiga Adalah = %lld\n", luas);
    printf("2. Panjang Sisi Segitiga atau Keliling adalah = %lld\n", keliling);
    printf("3. Rasio antara Luas Segitiga dan Panjang Segitiga atau Keliling adalah = %lld : %lld\n", luas/rasio, keliling/rasio);
}