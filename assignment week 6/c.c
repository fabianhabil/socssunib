#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 2501976503 - Fabian Habil

int main(){
    int n; scanf("%d", &n);
    int index = 1;
    while(n--){
        int tc; scanf("%d", &tc);
        long long int input[tc];
        long long int output[tc];
        long long int count = 0;
        for(int i  = 0 ; i < tc; i++){
            scanf("%lld", &input[i]);
        }
        for(int i = 0; i < tc; i++){
            scanf("%lld", &output[i]);
        }
        for(int i = 0; i < tc; i++){
            if(output[i] > input[i]){
                count++;
            }
        }
        printf("Case #%d: %lld\n", index, count);
        index++;
    }
}