#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int i;
    long long int n;
    float jumlah;
    float average;
    i = 0;
    n = 0;
    jumlah = 0;
    while(1){
        scanf("%lld", &i);
        if(i == 0 && n == 0){
            printf("Error\n");
            return 0;
        }
        if(i > 0){
            jumlah += i;
            n++;
        }
        if(i == 0){
            break;
        }
    }
    average = jumlah / n ;
    printf("%.1f %lld %lld\n", average, jumlah, n);
}