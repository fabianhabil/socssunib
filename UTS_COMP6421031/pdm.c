#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 2501976503 - Fabian Habil - LB75 - UTS Program Design Methods (Soal Nomber 3)

int main(){
    int sum, angkasekarang, temp, angkamemenuhi;
    for(int i = 100; i <= 500; i++){
        sum = 0;
        angkasekarang = i;
        while(angkasekarang > 0){
            temp = angkasekarang % 10;
            angkasekarang = angkasekarang / 10;
            sum += temp * temp * temp;
        }
        if(i == sum){
            angkamemenuhi = sum;
            printf("Angka yang Memenuhi : %d\n", angkamemenuhi);
        }
    }
}