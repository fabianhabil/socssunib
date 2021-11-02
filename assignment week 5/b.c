#include <stdio.h>
#include <stdlib.h>

int main(){
    int t; scanf("%d", &t);
    int indexx = 1;
    while(t--){
        long long int x; scanf("%d", &x);
        long long int angka[x];
        long long int sum = 0;
        for(int i = 0; i < x; i++){
            scanf("%lld", &angka[i]);
            sum = sum + angka[i];
        }
        printf("Case #%d: %lld\n", indexx, sum);
        indexx++;
    }
}