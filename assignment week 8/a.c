#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        long long int a, c;
        double b;
        double hasil;
        scanf("%lld %lf %lld", &a, &b, &c);
        hasil = a * (b / 100);
        if(hasil > c){
            printf("Case #%d: %lld\n", index, c);
        }
        else{
            printf("Case #%d: %lg\n", index, hasil);
        }
        index++;
    }
}