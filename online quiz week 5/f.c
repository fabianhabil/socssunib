#include <stdio.h>
#include <stdlib.h>
// 2501976503 - Fabian Habil Ramdhan

int main(){
    int tc; scanf("%d", &tc);
    int indexx = 1;
    while(tc--){
        int n; scanf("%d", &n);
        long long angka[n];
        long long firstmax = -1000000;
        for(int i = 0; i < n; i++){
            scanf("%lld", &angka[i]);
            if(angka[i] > firstmax) firstmax = angka[i];
        }
        long long count = 0;
        for(int i = 0; i < n; i++){
            if(angka[i] == firstmax) count++;
        }
        long long secondmax = -1000000;
        for(int i = 0; i < n; i++){
            if(angka[i] > secondmax && angka[i] != firstmax) secondmax = angka[i];
        }
        if(count > 1){
            printf("Case #%d: %lld\n", indexx, firstmax + firstmax);
        }
        else{
            printf("Case #%d: %lld\n", indexx, firstmax + secondmax);
        }
        indexx++;
    }
}