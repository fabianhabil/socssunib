#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil - LB75 - UTS Algorithm and Programming (SOCS Problem A)

int main(){
    char nada[100];
    scanf(" %[^\n]", nada);
    if(strcmp(nada, "C4") == 0){
        printf("Nada C4 adalah 261.63 Hz\n");
    }
    else if(strcmp(nada, "D4") == 0){
        printf("Nada D4 adalah 293.66 Hz\n");
    }
    else if(strcmp(nada, "E4") == 0){
        printf("Nada E4 adalah 329.63 Hz\n");
    }
    else if(strcmp(nada, "F4") == 0){
        printf("Nada F4 adalah 349.23 Hz\n");
    }
    else if(strcmp(nada, "G4") == 0){
        printf("Nada G4 adalah 392.00 Hz\n");
    }
    else if(strcmp(nada, "A4") == 0){
        printf("Nada A4 adalah 440.00 Hz\n");
    }
    else if(strcmp(nada, "B4") == 0){
        printf("Nada B4 adalah 493.88 Hz\n");
    }
}