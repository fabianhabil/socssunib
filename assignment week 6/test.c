#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 2501976503 - Fabian Habil

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        int n; scanf("%d", &n);
        long long int angka[n];
        for(int i  = 0; i < n; i++){
            scanf("%lld", &angka[i]);
        }
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(angka[i] > angka[j]){
                    int temp = angka[i];
                    angka[i] = angka[j];
                    angka[j] = temp;

                }
            }
        }
        for(int i = 0; i< n; i++){
            printf("%d ", angka[i]);
        }
}
}