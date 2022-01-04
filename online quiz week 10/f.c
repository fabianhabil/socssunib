#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  2501976503 - Fabian Habil

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        long long int n; scanf("%lld", &n);
        long long int angkarr[n];
        for(int i = 0; i < n; i++){
            scanf("%lld", &angkarr[i]);
        }
        for(int i  = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int temp;
                if(angkarr[i] < angkarr[j]){
                    temp = angkarr[i];
                    angkarr[i] = angkarr[j];
                    angkarr[j] = temp;
                }
            }
        }
        long long int bagian1 = 0, bagian2 = 0;
        for(int i  = 0; i < n / 2 - 1; i++){
            // printf("bagian11: %lld\n", angkarr[i+1] - angkarr[i]);
            if(bagian1 < (angkarr[i+1] - angkarr[i]) ){
                // printf("bagian1 : %d\n",bagian1);
                bagian1 = angkarr[i+1] - angkarr[i];
            }
        }
        for(int i = n / 2; i < n - 1; i++){
            // printf("bagian22: %lld\n", angkarr[i+1] - angkarr[i]);
            if(bagian2 < (angkarr[i+1] - angkarr[i]) ){
                // printf("bagian2 : %d\n",bagian2);
                bagian2 = (angkarr[i+1] - angkarr[i]);
            }
        }
        if(bagian1 > bagian2){
            printf("Case #%d: %lld\n", index, bagian1);
        }
        else{
            printf("Case #%d: %lld\n", index, bagian2);
        }
        index++;
    }
}