#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int n; scanf("%d", &n);
    int cekangka[n];
    int minimumodd = 100001; // ganjil - ganjil = genap
    long long int sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &cekangka[i]);
    }

    for(int i = 0; i < n; i++){
        sum += cekangka[i];
        if(minimumodd > cekangka[i] && cekangka[i] % 2 == 1){
            minimumodd = cekangka[i];
        }
    }
    if(sum % 2 == 0){
        printf("%lld\n", sum);
    }
    else{
        printf("%lld\n", sum - minimumodd);
    }
}