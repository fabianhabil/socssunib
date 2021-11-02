#include <stdio.h>
#include <stdlib.h>

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        int n; scanf("%d", &n);
        long long int angka[n];
        for(int i = 0; i < n; i++){
            scanf("%lld", &angka[i]);
        }
        printf("Case #%d: ", index);
        for(int i = n-1; i >= 0; i--){
            if(i == 0){
                printf("%lld\n", angka[i]);
            }
            else{
                printf("%lld ", angka[i]);
            }
        }
        index++;
    }
}