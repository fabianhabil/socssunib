#include <stdio.h>
#include <stdlib.h>
// 2501976503 - Fabian Habil

int main(){
    int daging, sayur, telur;
    scanf("%d%d%d", &daging, &sayur, &telur);
    if (daging > sayur && daging > telur){
        if(sayur > telur){
            printf("Daging\n");
            printf("Sayur\n");
            printf("Telur\n");
        }
        else{
            printf("Daging\n");
            printf("Telur\n");
            printf("Sayur\n");
        }
    }
    else if(sayur > daging && sayur > telur){
        if(daging > telur){
            printf("Sayur\n");
            printf("Daging\n");
            printf("Telur\n");
        }
        else{
            printf("Sayur\n");
            printf("Telur\n");
            printf("Daging\n");
        }
    }
    else if(telur > daging && telur > sayur){
        if(daging > sayur){
            printf("Telur\n");
            printf("Daging\n");
            printf("Sayur\n");
        }
        else{
            printf("Telur\n");
            printf("Sayur\n");
            printf("Daging\n");
        }
    }
}