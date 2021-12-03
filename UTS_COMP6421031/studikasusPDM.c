#include <stdio.h>
#include <stdlib.h>

// 2501976503 - Fabian Habil Ramdhan - Studi Kasus UTS Semester 1 Program Design Methods

int main(){
    long long int input;
    long long int satuan, belasan, puluhan, ratusan, ribuan;
    long long int puluhanribuan, belasanribuan, ratusanribuan, jutaan, puluhanjutaan;
    long long int belasanjutaan, ratusanjutaan, miliar, belasanmiliar, puluhanmiliar;
    char angka[][10] = {{""}, {"Satu"}, {"Dua"}, {"Tiga"}, {"Empat"}, {"Lima"}, {"Enam"}, {"Tujuh"}, {"Delapan"}, {"Sembilan"}};
    scanf("%lld", &input);

    // satuan
    satuan = input % 10;
    input /= 10;

    //belasan
    belasan = satuan;
    
    // puluhan
    puluhan = input % 10;   
    input /= 10;

    // ratusan
    ratusan = input % 10;
    input /= 10;

    // ribuan
    ribuan = input % 10;
    input /= 10;

    // puluhan ribuan
    puluhanribuan = input % 10;
    input /= 10;

    // belasan ribuan
    belasanribuan = ribuan;

    // ratusan ribuan
    ratusanribuan = input % 10;
    input /= 10;

    // jutaan
    jutaan = input % 10;
    input /= 10;

    // belasan jutaan
    belasanjutaan = jutaan;

    // puluhan jutaan
    puluhanjutaan = input % 10;
    input /= 10;

    // ratusan jutaan
    ratusanjutaan = input % 10;
    input /= 10;

    // miliar
    miliar = input % 10;
    input /= 10;

    // belasan miliar
    belasanmiliar = miliar;

    // puluhan miliar
    puluhanmiliar = input % 10;
    input /= 10;

    // ----------------------------------------------------------------------------- // 

    // puluhan miliar
    if(puluhanmiliar != 0 && puluhanmiliar != 1){
        if(miliar != 0 && miliar != 1){
            printf("%s Puluh %s Miliar ", angka[puluhanmiliar], angka[miliar]);
        }
        else if (miliar == 1) printf("%s Puluh Satu Miliar ", angka[puluhanmiliar]);
        else printf("%s Puluh Miliar ", angka[miliar]);
    }

    // belasan miliar
    if(puluhanmiliar == 1 && (miliar != 0 && miliar != 1)){
        printf("%s Belas Miliar ", angka[belasanmiliar]);
    }

    // sepuluh miliar
    if(puluhanmiliar == 1 && belasanmiliar == 0){
        printf("Sepuluh Miliar ");
    }

    // sebelas miliar
    if(puluhanmiliar == 1 && belasanmiliar == 1){
        printf("Sebelas Miliar ");
    }

    // miliar
    if(miliar != 0 && puluhanmiliar == 0){
        printf("%s Miliar ", angka[miliar]);
    }

    // ratusan jutaan
    if(ratusanjutaan != 0 && ratusanjutaan != 1){
        if(puluhanjutaan == 0 && jutaan == 0){
            printf("%s Ratus Juta ", angka[ratusanjutaan]);
        }
        else printf("%s Ratus ", angka[ratusanjutaan]);
    }

    // seratus jutaan
    if(ratusanjutaan == 1){
        if(puluhanjutaan == 0 && jutaan == 0){
            printf("Seratus Juta ");
        }
        else printf("Seratus ");
    }

    // puluhan jutaan
    if(puluhanjutaan != 0 && puluhanjutaan != 1){
        if(jutaan != 0 && jutaan != 1){
            printf("%s Puluh ", angka[puluhanjutaan]);
        }
        else if (jutaan == 1) printf("%s Puluh Satu Juta ", angka[puluhanjutaan]);
        else printf("%s Puluh Juta ", angka[puluhanjutaan]);
    }

    // belasan jutaan
    if(puluhanjutaan == 1 && (jutaan != 0 && jutaan != 1)){
        printf("%s Belas Juta ", angka[belasanjutaan]);
    }

    // sepuluh juta
    if(puluhanjutaan == 1 && belasanjutaan == 0){
        printf("Sepuluh Juta ");
    }

    // sebelas juta
    if(puluhanjutaan == 1 && belasanjutaan == 1){
        printf("Sebelas Juta ");
    }

    // jutaan
    if(jutaan != 1 && (jutaan != 0 && ratusanjutaan != 1)){
        printf("%s Juta ", angka[jutaan]);
    }

    // sejuta
    if(jutaan == 1 && (jutaan != 0 && puluhanjutaan == 0)){
        printf("Sejuta ");
    }

    // ratusan ribuan
    if(ratusanribuan != 0 && ratusanribuan != 1){
        if(puluhanribuan == 0 && ribuan == 0){
            printf("%s Ratus Ribu ", angka[ratusanribuan]);
        }
        else printf("%s Ratus ", angka[ratusanribuan]);
    }

    // seratus ribu
    if(ratusanribuan == 1){
        if(puluhanribuan == 0 && ribuan == 0){
            printf("Seratus Ribu ");
        }
        else printf("Seratus ");
    }

    // puluhan ribuan
    if(puluhanribuan != 1 && puluhanribuan != 0){
        printf("%s Puluh %s Ribu ", angka[puluhanribuan], angka[ribuan]);
    }

    // belasan ribuan
    if(puluhanribuan == 1 && (puluhanribuan != 0 && belasanribuan != 1 && belasanribuan != 0)){
        printf("%s Belas Ribu ", angka[belasanribuan]);
    }

    // sebelas ribuan
    if(puluhanribuan == 1 && (puluhanribuan != 0 && belasanribuan == 1 && belasanribuan != 0)){
        printf("Sebelas Ribu ");
    }

    // sepuluh ribu
    if(puluhanribuan == 1 && (puluhanribuan != 0 && belasanribuan == 0)){
        printf("Sepuluh Ribu ");
    }

    // ribuan
    if(ribuan != 1 && (ribuan != 0 && puluhanribuan == 0)){
        printf("%s Ribu ", angka[ribuan]);
    }

    // seribu
    if(ribuan == 1 && (ribuan != 0 && puluhanribuan == 0)){
        printf("Seribu ");
    }

    // seratus
    if(ratusan == 1){
        printf("Seratus ");
    }

    // ratusan
    if(ratusan != 1 && ratusan != 0){
        printf("%s Ratus ", angka[ratusan]);
    }

    // puluhan
    if(puluhan != 0 && puluhan != 1){
        printf("%s Puluh ", angka[puluhan]);
    }

    // sepuluh
    if(puluhan == 1 && satuan == 0){
        printf("Sepuluh");
    }

    // belasan
    if(puluhan == 1 && (belasan != 1 && satuan != 0)){
        printf("%s Belas", angka[belasan]);
    }

    // sebelas
    if(puluhan == 1 && belasan == 1){
        printf("Sebelas");
    }

    // satuan
    if(satuan != 0 && puluhan != 1){
        printf("%s", angka[satuan]);
    }
}