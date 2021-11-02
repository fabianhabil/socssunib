#include <stdio.h>
#include <stdlib.h>

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        int n; scanf("%d", &n);
        long long int input[n];
        long long int output[n];
        long long int sisa[n];
        for(int i = 0; i < n; i++){
            scanf("%lld", &input[i]);
        }
        for(int i = 0; i < n; i++){
            scanf("%lld", &output[i]);
        }
        printf("Case #%d: ", index);
        for(int i = 0; i < n; i++){
            if(i == n-1){
                printf("%lld\n", input[i] - output[i]);
            }
            else{
                printf("%lld ", input[i] - output[i]);
            }
        }
    index++;
    }
}