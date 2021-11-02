#include <stdio.h>
#include <stdlib.h>

int main(){
    int uangpertama;
    double bunga;
    scanf("%d %lf", &uangpertama, &bunga);
    bunga = bunga / 100;
    double uangfinal = uangpertama;
    for(int i = 0; i < 3; i++){
        uangfinal = uangfinal + (uangfinal * bunga);
    }
    printf("%.2f", uangfinal);
}